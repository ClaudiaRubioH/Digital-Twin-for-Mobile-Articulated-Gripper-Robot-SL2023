% Script to import and set initial position of sm_kinovaGen3.urdf
% Copyright 2021-2022 The MathWorks, Inc.

%% Import URDF file to create Simscape Multibody model

addpath([pwd filesep 'RobotiqGripper85']);
[mdl_h] = smimport('robotiq_arg85_description.URDF','ModelName','Robotiq85_Import');
mdl_name = getfullname(mdl_h);

%% Update diagram, note initial robot position
set_param(mdl_h,'SimulationCommand','update')

%%%