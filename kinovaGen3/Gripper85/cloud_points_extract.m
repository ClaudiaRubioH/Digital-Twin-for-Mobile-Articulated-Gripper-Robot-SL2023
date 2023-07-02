
finger_stl_points = stlread('inner_finger_fine.STL');
figure(1)
trimesh(finger_stl_points,'EdgeColor',[0.6 0.6 0.6])
axis equal
box on
title('STL Mesh')


edge_points = finger_stl_points.Points;
points_on_pad_index = find(edge_points(:,1)<(-0.005));

points_on_pad = edge_points(points_on_pad_index,:);
save('points_on_pad')

figure(2)
trimesh(finger_stl_points,'EdgeColor',[0.6 0.6 0.6])
hold on
plot3(edge_points(points_on_pad_index,1),edge_points(points_on_pad_index,2),edge_points(points_on_pad_index,3),'bo')
axis equal
box on
hold off
title('Points on Pad')
