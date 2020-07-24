x=[0.5 1.0 1.5 2.0 2.5 3.0]
y=[0 1 2 3 4 5]
z=[0 2 4 6 8 10]
subplot(2,1,1)
plot(x,y,'r*-')
xtitle('subplot 1')
xlabel('x-axis')
ylabel('y-axis')
xstring(1,0.5,'line 1')
xgrid()
subplot(2,1,2)
plot(y,z,'r*-')
xtitle('subplot 2')
xlabel('x-axis')
ylabel('y-axis')
xstring(1,2,'line 2')
xgrid()


