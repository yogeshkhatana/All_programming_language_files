x=[0.5 1.0 1.5 2.0 2.5 3.0]
y=[0 1 2 3 4 5]
z=[0 2 4 6 8 10]
subplot(1,2,1)
plot(x,y,'r*-')
xlabel('x-axis')
ylabel('y-axis')
xstring(1,0.5,'line 1')
xgrid()
subplot(1,2,2)
plot(y,z,'b>-')
xtitle('subplot')
xlabel('x-axis')
ylabel('y-axis')
xstring(1,2,'line 1')//1,2 means scale and lie 1 means label for points
xgrid()                                 //line

