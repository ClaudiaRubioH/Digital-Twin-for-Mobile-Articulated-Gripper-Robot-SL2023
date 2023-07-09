% Simscape(TM) Multibody(TM) version: 7.7

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(13).translation = [0.0 0.0 0.0];
smiData.RigidTransform(13).angle = 0.0;
smiData.RigidTransform(13).axis = [0.0 0.0 0.0];
smiData.RigidTransform(13).ID = "";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [-206.43094260915575 -42.17189683425682 -227.91987789291974];  % mm
smiData.RigidTransform(1).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(1).axis = [1 0 -7.7098821154524745e-17];
smiData.RigidTransform(1).ID = "B[Base-1:-:Coupler-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [85.594721876326162 29.999999999998689 -15.155545040405155];  % mm
smiData.RigidTransform(2).angle = 6.9846649648249432e-15;  % rad
smiData.RigidTransform(2).axis = [-0.99975628220576807 -0.022076598245670348 7.7080030799895079e-17];
smiData.RigidTransform(2).ID = "F[Base-1:-:Coupler-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [29.569057390844115 -2.171896834256823 0.00012210708033588702];  % mm
smiData.RigidTransform(3).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(3).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(3).ID = "B[Base-1:-:Coupler-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [321.59472187632593 30 -243.07554504040496];  % mm
smiData.RigidTransform(4).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(4).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(4).ID = "F[Base-1:-:Coupler-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [249.99999999999994 -4.171896834256823 0];  % mm
smiData.RigidTransform(5).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(5).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(5).ID = "B[Base-1:-:Caster_coupler-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [2.5579538487363607e-13 4.4408920985006262e-15 1.1368683772161603e-13];  % mm
smiData.RigidTransform(6).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(6).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(6).ID = "F[Base-1:-:Caster_coupler-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [-10.300204683499793 78.319472113363545 -17.500000000000014];  % mm
smiData.RigidTransform(7).angle = 0;  % rad
smiData.RigidTransform(7).axis = [0 0 0];
smiData.RigidTransform(7).ID = "B[Caster_coupler-1:-:Small_wheel-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [-5.6843418860808015e-14 -17.499999999999773 -1.1866063687193673e-12];  % mm
smiData.RigidTransform(8).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(8).axis = [0 -0.70710678118654879 -0.70710678118654624];
smiData.RigidTransform(8).ID = "F[Caster_coupler-1:-:Small_wheel-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [0.0004791809808391001 34.292864044625048 0.0088503056183998619];  % mm
smiData.RigidTransform(9).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(9).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(9).ID = "B[Big_wheel-1:-:Coupler-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(10).translation = [19.594721876326105 9.9999999999995381 38.844454959595012];  % mm
smiData.RigidTransform(10).angle = 3.14159265358979;  % rad
smiData.RigidTransform(10).axis = [1 0 0];
smiData.RigidTransform(10).ID = "F[Big_wheel-1:-:Coupler-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(11).translation = [0.0004791809808391001 34.292864044625063 0.0088503056183998619];  % mm
smiData.RigidTransform(11).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(11).axis = [-0.57735026918962584 -0.57735026918962584 -0.57735026918962584];
smiData.RigidTransform(11).ID = "B[Big_wheel-2:-:Coupler-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(12).translation = [19.594721876326048 9.9999999999926903 38.844454959594941];  % mm
smiData.RigidTransform(12).angle = 3.1415926535897829;  % rad
smiData.RigidTransform(12).axis = [-1 -0 -0];
smiData.RigidTransform(12).ID = "F[Big_wheel-2:-:Coupler-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(13).translation = [5.8411074140616854 10.06722214987793 416.00001786290568];  % mm
smiData.RigidTransform(13).angle = 0;  % rad
smiData.RigidTransform(13).axis = [0 0 0];
smiData.RigidTransform(13).ID = "RootGround[Base-1]";


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(5).mass = 0.0;
smiData.Solid(5).CoM = [0.0 0.0 0.0];
smiData.Solid(5).MoI = [0.0 0.0 0.0];
smiData.Solid(5).PoI = [0.0 0.0 0.0];
smiData.Solid(5).color = [0.0 0.0 0.0];
smiData.Solid(5).opacity = 0.0;
smiData.Solid(5).ID = "";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 4.0939511325290869;  % kg
smiData.Solid(1).CoM = [-29.173909734820423 2.1637237870976795 -0.00012193449219468822];  % mm
smiData.Solid(1).MoI = [96866.513142333875 290248.62898909795 193608.08199441238];  % kg*mm^2
smiData.Solid(1).PoI = [-0.003334322541978893 0.14493148873762421 -657.84026696963849];  % kg*mm^2
smiData.Solid(1).color = [0.29803921568627451 0.29803921568627451 0.29803921568627451];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = "Base*:*Predeterminado";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.50327590935171629;  % kg
smiData.Solid(2).CoM = [-0.00032524636671591052 11.961839894673039 -0.0060071855227816417];  % mm
smiData.Solid(2).MoI = [1140.9361442769382 2088.7777671193558 1140.5070956067996];  % kg*mm^2
smiData.Solid(2).PoI = [-0.093098729506085165 0.24243622209628055 -0.0084412413953775071];  % kg*mm^2
smiData.Solid(2).color = [1 1 0];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = "Big_wheel*:*Predeterminado";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.16359827627954548;  % kg
smiData.Solid(3).CoM = [4.4052781236739689 9.9999999999999982 0.15554504040491865];  % mm
smiData.Solid(3).MoI = [33.241506342814056 273.97473287626997 281.67260076687069];  % kg*mm^2
smiData.Solid(3).PoI = [0 -0.77304852746822328 0];  % kg*mm^2
smiData.Solid(3).color = [0.6470588235294118 0.61960784313725492 0.58823529411764708];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = "Coupler*:*Predeterminado";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 0.022416798235896304;  % kg
smiData.Solid(4).CoM = [-3.6394132087487745 32.758494868609787 -2.0301708256530861e-05];  % mm
smiData.Solid(4).MoI = [17.554252447405236 2.8993416987258613 17.266577010391764];  % kg*mm^2
smiData.Solid(4).PoI = [-1.9465873160362863e-06 -8.0480008287485466e-06 2.3000592759744825];  % kg*mm^2
smiData.Solid(4).color = [0.7803921568627451 0.76078431372549016 0.74117647058823533];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = "Caster_coupler*:*Predeterminado";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(5).mass = 0.0086467766361177159;  % kg
smiData.Solid(5).CoM = [0.0043764656051184046 -1.0503643732177265e-07 -0.0076743056863057121];  % mm
smiData.Solid(5).MoI = [1.0196057725863401 1.9088997050658125 1.0191752771387845];  % kg*mm^2
smiData.Solid(5).PoI = [1.4377584841912111e-08 0.00014384301036944689 -3.3527305279967386e-08];  % kg*mm^2
smiData.Solid(5).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(5).opacity = 1;
smiData.Solid(5).ID = "Small_wheel*:*Predeterminado";


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(3).Rz.Pos = 0.0;
smiData.RevoluteJoint(3).ID = "";

smiData.RevoluteJoint(1).Rz.Pos = 0;  % deg
smiData.RevoluteJoint(1).ID = "[Base-1:-:Caster_coupler-1]";

smiData.RevoluteJoint(2).Rz.Pos = 89.999999999999986;  % deg
smiData.RevoluteJoint(2).ID = "[Big_wheel-1:-:Coupler-1]";

smiData.RevoluteJoint(3).Rz.Pos = 89.999999999999986;  % deg
smiData.RevoluteJoint(3).ID = "[Big_wheel-2:-:Coupler-2]";

