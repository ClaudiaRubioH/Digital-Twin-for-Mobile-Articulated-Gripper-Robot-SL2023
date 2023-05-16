clear
clc
robot = importrobot('sm_kinovaGen3.urdf');


showdetails(robot)


randConfig =robot.randomConfiguration;
tform = getTransform(robot,randConfig,'EndEffector_Link','base_link');

figure(1)
show(robot,randConfig);
xlim([-1 1])
ylim([-1 1])
zlim([-1 1])

ik = inverseKinematics('RigidBodyTree',robot);

weights = [0.25 0.25 0.25 1 1 1];
initialguess = robot.homeConfiguration;

figure(2)
[configSoln,solnInfo] = ik('EndEffector_Link',tform,weights,initialguess);
show(robot,configSoln);

xlim([-1 1])
ylim([-1 1])
zlim([-1 1])