 
%%%%%%%% 3D plot

g1=[-1 0 1];
g2=[-1 0.6 1];
tau1=3;
 
left_0=[0 0 0];
x1_0=[0 0.2 0]; 
x2_0=[0 0.4 0];
right_0=[0 0.6 0];     


%right low
x_c_1 = 0.2;
y_c_1 = 0.8;
z_c_1 = 0.4;
a_1 = .1;
b_1 = .2;
c_1 = .1;
%right high
x_c_2 = -0.4;
y_c_2 = 1.2;
z_c_2 = 0.8;
a_2 = 0.15;
b_2 = 0.15;
c_2 = .2;

%left low
x_c_3 = 0.15;
y_c_3 = 0.2;
z_c_3 = 0.4;
a_3 = .1;
b_3 = .1;
c_3 = .1;



plot3(out.simout_right.Data(:,1),out.simout_right.Data(:,2),out.simout_right.Data(:,3),'r','LineWidth',2 );
hold on
plot3(out.simout_left.Data(:,1),out.simout_left.Data(:,2),out.simout_left.Data(:,3),'r','LineWidth',2 );

 
hold on
[x, y, z] = ellipsoid(x_c_1,y_c_1,z_c_1,a_1,b_1,c_1);
surf(x, y, z)
axis equal

hold on
[x, y, z] = ellipsoid(x_c_2,y_c_2,z_c_2,a_2,b_2,c_2);
surf(x, y, z)
axis equal

hold on
[x, y, z] = ellipsoid(x_c_3,y_c_3,z_c_3,a_3,b_3,c_3);
surf(x, y, z)
axis equal


title('Coupled DMP generalization in 3D');
ax = gca;
ax.FontSize = 16; 
xlabel('X') 
ylabel('Y') 
zlabel('Z') 
text(0,0,'\leftarrow ini left','FontSize', 14)
text(0,0.6,'\leftarrow ini right','FontSize', 14)
text(-1,0.6,0.9,'\uparrow goal right','FontSize', 14)
text(-1,0,0.9,'\uparrow goal left','FontSize', 14)

grid on
grid minor


plot3(out.simout_right_true_demo.Data(:,1),out.simout_right_true_demo.Data(:,2),out.simout_right_true_demo.Data(:,3),'g:','LineWidth',2 );
hold on
plot3(out.simout_left_true_demo.Data(:,1),out.simout_left_true_demo.Data(:,2),out.simout_left_true_demo.Data(:,3),'g:','LineWidth',2 );
view(8,29)

 

 



 