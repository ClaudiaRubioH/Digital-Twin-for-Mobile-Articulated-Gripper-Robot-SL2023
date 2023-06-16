
robot = importrobot('sm_kinovaGen3.urdf');
kinovaRigidBody = importrobot('sm_kinovaGen3.urdf');

%Setup a solver for kinovaGen3
ik = inverseKinematics('RigidBodyTree',robot);

%Tolerance for position and orientation of end effector
weights = [0.25 0.25 0.25 1 1 1];
initialguess = robot.homeConfiguration;

waypoints = [];
waypoints=zeros(1,8);

translate_frame = [[0.5 0.5 -0.3];[0.5 0.5 -0.17];[0.5 0.5 -0.17];[0.5 -0.5 -0.3];[0.5 -0.5 -0.17];[0.5 -0.5 -0.17];[0.5 -0.5 -0.3]];
M_rotate = makehgtform('xrotate',pi);

[m,n] = size(translate_frame);

for ii = 1:m
M_move = makehgtform('translate',translate_frame(ii,:));

M_total = M_rotate*M_move;

%Use transformation matrix to solve configuration
[configSoln,solnInfo] = ik('EndEffector_Link',M_total,weights,initialguess);


waypoints(ii+1,:) = [configSoln(1:end).JointPosition 0];

initialguess = configSoln;

end

waypoints(4:6,8)=0.5;
waypoints(7,8)=-0.5;

waypoints(ii+2,:) = 0;

waypoints=waypoints'

save('waypoints')