%Import STL file
wrist_2 = stlread('kg3_Wrist2_Link.STL');

%Visualize the STL file of wrist_2
figure(1)
trimesh(wrist_2,'EdgeColor',[0.6 0.6 0.6])
axis equal
box on
title('STL Mesh of wrist_2')

%Get all the points in the STL file(There are originally some points in the stl file)
%The variable gotten here is the xyz coordinate of the points.
edge_points_w2 = wrist_2.Points;

%Select the points needed(In this example, points with x coordinate larger than 0.034 is chosen)
points_on_pad_w2_index = find(edge_points_w2(:,1)>(0.034));
points_on_pad_w2 = edge_points_w2(points_on_pad_w2_index,:);

%Save the points needed
save('wrist2_points_on_pad')

%Visualize the points selected
figure(2)
trimesh(wrist_2,'EdgeColor',[0.3 0.3 0.3])
hold on
plot3(edge_points_w2(points_on_pad_w2_index,1),edge_points_w2(points_on_pad_w2_index,2),edge_points_w2(points_on_pad_w2_index,3),'bo')
axis equal
box on
hold off
title('Points on Pad of wrist_2')

%Import STL file
road = stlread('Road.STL');

%Visualize the STL file of road
figure(3)
trimesh(road,'EdgeColor',[0.6 0.6 0.6])
axis equal
box on
title('STL Mesh')

%Get all the points in the STL file(There are originally some points in the stl file)
%The variable gotten here is the xyz coordinate of the points.
edge_points_r = road.Points;

%Select the points needed(In this example, points with y coordinate larger than 100 is chosen)
points_on_pad_r_index = find(edge_points_r(:,2)>(100));
points_on_pad_r = edge_points_r(points_on_pad_r_index,:);

%Save the points needed
save('road_points_on_pad')

%Visualize the points selected
figure(4)
trimesh(wrist_2,'EdgeColor',[0.3 0.3 0.3])
hold on
plot3(edge_points_r(points_on_pad_r_index,1),edge_points_r(points_on_pad_r_index,2),edge_points_r(points_on_pad_r_index,3),'bo')
axis equal
box on
hold off
title('Points on Pad of road')