% Simscape(TM) Multibody(TM) version: 7.6

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(5).translation = [0.0 0.0 0.0];
smiData.RigidTransform(5).angle = 0.0;
smiData.RigidTransform(5).axis = [0.0 0.0 0.0];
smiData.RigidTransform(5).ID = "";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [143.70310380279247 238.74387820902299 208.34589117172857];  % mm
smiData.RigidTransform(1).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(1).axis = [0.57735026918962584 0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(1).ID = "B[Link1-1:-:Link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [-143.70310380279247 -1.2441603303159354e-11 -2.8705926524708048e-12];  % mm
smiData.RigidTransform(2).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(2).axis = [-0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(2).ID = "F[Link1-1:-:Link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [-12.662797421533714 316.51179972819159 186.18791013630971];  % mm
smiData.RigidTransform(3).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(3).axis = [1 0 0];
smiData.RigidTransform(3).ID = "B[base-1:-:Link1-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [-186.18791013630971 -1.5987211554602254e-13 -2.5579538487363607e-13];  % mm
smiData.RigidTransform(4).angle = 2.0943951023931957;  % rad
smiData.RigidTransform(4).axis = [0.57735026918962573 0.57735026918962584 0.57735026918962573];
smiData.RigidTransform(4).ID = "F[base-1:-:Link1-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [111.13741018675782 -24.88105049163908 362.40252704512528];  % mm
smiData.RigidTransform(5).angle = 0;  % rad
smiData.RigidTransform(5).axis = [0 0 0];
smiData.RigidTransform(5).ID = "RootGround[base-1]";


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(3).mass = 0.0;
smiData.Solid(3).CoM = [0.0 0.0 0.0];
smiData.Solid(3).MoI = [0.0 0.0 0.0];
smiData.Solid(3).PoI = [0.0 0.0 0.0];
smiData.Solid(3).color = [0.0 0.0 0.0];
smiData.Solid(3).opacity = 0.0;
smiData.Solid(3).ID = "";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 5.5243947930050696;  % kg
smiData.Solid(1).CoM = [-31.155077123567683 128.86146813436795 5.5699887340042996e-06];  % mm
smiData.Solid(1).MoI = [52659.836591177766 31438.732208862668 66648.812436036387];  % kg*mm^2
smiData.Solid(1).PoI = [-3.5473247638104412e-06 -0.011911162990318547 -7243.8482925270473];  % kg*mm^2
smiData.Solid(1).color = [1 0.4392156862745098 0.058823529411764705];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = "base*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 3.2557437752800058;  % kg
smiData.Solid(2).CoM = [-2.3302453123386856e-05 81.937597729103658 51.371034718273023];  % mm
smiData.Solid(2).MoI = [41973.079205788046 17704.401681289492 29793.823938650221];  % kg*mm^2
smiData.Solid(2).PoI = [-16499.030096219274 0.0085346335498029148 0.011671999210946664];  % kg*mm^2
smiData.Solid(2).color = [1 0.47058823529411764 0.058823529411764705];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = "Link1*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 2.2751437492444428;  % kg
smiData.Solid(3).CoM = [0.00011633499235604429 -0.14308560781313157 -125.66697696992108];  % mm
smiData.Solid(3).MoI = [25511.520076336616 25390.823981125803 2610.9641197824512];  % kg*mm^2
smiData.Solid(3).PoI = [-30.985158921258655 0.038452669400915566 0.0027962984352898805];  % kg*mm^2
smiData.Solid(3).color = [1 0.45490196078431372 0.027450980392156862];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = "Link2*:*Default";


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(2).Rz.Pos = 0.0;
smiData.RevoluteJoint(2).ID = "";

smiData.RevoluteJoint(1).Rz.Pos = 62.58235986023238;  % deg
smiData.RevoluteJoint(1).ID = "[Link1-1:-:Link2-1]";

smiData.RevoluteJoint(2).Rz.Pos = -102.66649777669052;  % deg
smiData.RevoluteJoint(2).ID = "[base-1:-:Link1-1]";

