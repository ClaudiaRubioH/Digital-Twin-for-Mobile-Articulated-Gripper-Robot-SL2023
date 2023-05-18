clear
clc
robot = importrobot('sm_kinovaGen3.urdf');

%Show info of Kinovagen3
showdetails(robot)

%Get a random configuration
randConfig =robot.randomConfiguration;

%Get transformation matrix of the random configuration
%Transformation matrix contains position and orientation of end effector(last joint)

tform = getTransform(robot,randConfig,'EndEffector_Link','base_link');

%Setup a solver for kinovaGen3
ik = inverseKinematics('RigidBodyTree',robot);

%Tolerance for position and orientation of end effector
weights = [0.25 0.25 0.25 1 1 1];
initialguess = robot.homeConfiguration;

%Use transformation matrix to solve configuration
figure(1)
[configSoln,solnInfo] = ik('EndEffector_Link',tform,weights,initialguess);
show(robot,configSoln);

xlim([-1.2 1.2])
ylim([-1.2 1.2])
zlim([-1.2 1.2])

%%% Try to create to push Minas