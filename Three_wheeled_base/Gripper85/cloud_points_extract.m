%Import STL file
finger_stl_points = stlread('inner_finger_fine.STL');

%Visualize the STL file
figure(1)
trimesh(finger_stl_points,'EdgeColor',[0.6 0.6 0.6])
axis equal
box on
title('STL Mesh')

%Get all the points in the STL file(There are originally some points in the stl file)
%The variable gotten here is the xyz coordinate of the points.
edge_points = finger_stl_points.Points;

%Select the points needed(In this example, points with x coordinate smaller than -0.005 is chosen)
points_on_pad_index = find(edge_points(:,1)<(-0.005));
points_on_pad = edge_points(points_on_pad_index,:);

%Save the points needed
save('points_on_pad')

%Visualize the points selected
figure(2)
trimesh(finger_stl_points,'EdgeColor',[0.6 0.6 0.6])
hold on
plot3(edge_points(points_on_pad_index,1),edge_points(points_on_pad_index,2),edge_points(points_on_pad_index,3),'bo')
axis equal
box on
hold off
title('Points on Pad')
