function [out,solutionFlag] =  sm_kinovaGen3_arm_ik_test(eePose,eeIgs)

persistent ks_kinovaGen3_arm;
mdlname = 'sm_kinovaGen3_arm';

if isempty(ks_kinovaGen3_arm)
    load_system(mdlname);
    ks_kinovaGen3_arm = simscape.multibody.KinematicsSolver(mdlname);

    ks_kinovaGen3_arm.addFrameVariables('Home','T',[mdlname,'/Kinova Gen3 Arm/No Transform/F'],[mdlname ,'/Kinova Gen3 Arm/Bracelet_Link/Endeffector_OriginTransform/F']);
    ks_kinovaGen3_arm.addFrameVariables('Home','R',[mdlname,'/Kinova Gen3 Arm/No Transform/F'],[mdlname ,'/Kinova Gen3 Arm/Bracelet_Link/Endeffector_OriginTransform/F']);
    ks_kinovaGen3_arm.addTargetVariables([ks_kinovaGen3_arm.frameVariables.ID]);

    arm_jointsIDs = ["j1.Rz.q";"j2.Rz.q";"j3.Rz.q";"j4.Rz.q";"j5.Rz.q";"j6.Rz.q";"j7.Rz.q"];

    ks_kinovaGen3_arm.addInitialGuessVariables(arm_jointsIDs);
    close_system(mdlname);
    ks_kinovaGen3_arm.addOutputVariables(arm_jointsIDs);
end

% Solve for multiple end effector targets
for i = 1:size(eePose,1)
    if i ==1

   

        [out(:,i),status,~,~] = ks_kinovaGen3_arm.solve(eePose(i,:),eeIgs);
               

               
    else
        %disp(['Input: ', num2str(eePose(i,:))]);
        
        [out(:,i),status,~,~] = ks_kinovaGen3_arm.solve(eePose(i,:),out(:,i-1));

        
    end
    % if status~=1
    %     error(['Solution not found'])
    % end
end

solutionFlag = status;

end



% 
% function [out,solutionFlag] =  sm_mars_rover_arm_ik(eePose,eeIgs)
% % Uses a persistent KinematicsSolver object to compute the inverse
% % kinematics of the rover arm.  Specifically, given the position and orientation 
% % of the end effector, it computes the corresponding actuator positions. It
% % also uses initial guesses to guide the solver to the desired solution.
% 
% % The kinematics solver object is created using a 'sm_mars_rover_arm.slx'
% % model which is a replica of the arm being used by the main model 'sm_mars_rover.slx'.
% 
% % Copyright 2021-2022 The MathWorks, Inc.
% 
% persistent ks_mars_rover;
% % Note that any structural changes made to the arm in 'sm_mars_rover.slx' wont be
% % present in 'sm_mars_rover_arm.slx'. So any such changes to arm must be
% % replicated to 'sm_mars_rover_arm.slx' to keep the kinematics of the arm consistent.
% mdlpath = ['sm_mars_rover_data',filesep,'sm_mars_rover_arm'];
% mdlname = 'sm_mars_rover_arm';
% if isempty(ks_mars_rover)
%     % Note that this code is only run first time this function is called or
%     % if this function is cleared from memory.    
% 
%     % Create KinematicsSolver object for inverse kinematics.  
%     load_system(mdlpath);
%     ks_mars_rover = simscape.multibody.KinematicsSolver(mdlname);
%     % Add frame variables (end effector position, orientation, with respect to the arm base frame)
%     ks_mars_rover.addFrameVariables('Home','T',[mdlname '/Chassis/ArmBase/F'],[mdlname ,'/Rover Arm/EndEff/EndEffector/F']);
%     ks_mars_rover.addFrameVariables('Home','R',[mdlname '/Chassis/ArmBase/F'],[mdlname ,'/Rover Arm/EndEff/EndEffector/F']);
%     % Add target variables (end effector position and orientation)
%     ks_mars_rover.addTargetVariables([ks_mars_rover.frameVariables.ID]);
%     % Add initial guess variables (actuator positions)
%     rover_arm_jointsIDs = ["j1.Rz.q";"j2.Rz.q";"j3.Rz.q";"j4.Rz.q";"j5.Rz.q";"j6.Rz.q" ];
%     ks_mars_rover.addInitialGuessVariables(rover_arm_jointsIDs);
%     % Add output variables (actuator positions)
%     ks_mars_rover.addOutputVariables(rover_arm_jointsIDs);
% 
%     close_system(mdlname);   
% end
% % Solve for multiple end effector targets
% for i = 1:size(eePose,1)   
%     if i ==4
%         [out(i,:),status,~,~] = ks_mars_rover.solve(eePose(i,:),out(i-1,:));
%     else
%         [out(i,:),status,~,~] = ks_mars_rover.solve(eePose(i,:),eeIgs(i,:));
%     end
%     if status~=1        
%         error(['Solution not found'])        
%     end    
% end
% 
% solutionFlag = status;
% 
% end