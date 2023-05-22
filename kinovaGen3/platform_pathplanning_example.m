clear
clc

stateValidator = validatorOccupancyMap;

grid = zeros(50,100);
grid(24:47,68:70) = 1;
grid(45:47,20:70) = 1;
grid(12:45,20:22) = 1;
grid(10:12,20:51) = 1;
grid(10:26,51:53) = 1;
grid(24:26,51:70) = 1;

map = binaryOccupancyMap(grid);
show(map)

stateValidator.Map = map;
stateValidator.StateSpace.StateBounds(1:2,:) = [map.XWorldLimits; map.YWorldLimits];


refPath = [0,25;100,25];
hold on
plot(refPath(:,1),refPath(:,2),"--o")

planner = trajectoryOptimalFrenet(refPath,stateValidator);
planner.TerminalStates.Longitudinal = 100;
planner.TerminalStates.Lateral = -20:5:20;
planner.FeasibilityParameters.MaxAcceleration = 10;

planner.DeviationOffset = 5;

initCartState = [0 25 pi/3 0 0 0];

initFrenetState = cart2frenet(planner,initCartState);

plan(planner,initFrenetState);

show(map)
hold on
show(planner,'Trajectory','all')