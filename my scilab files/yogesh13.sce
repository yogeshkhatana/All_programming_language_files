x=[0.5 1.0 1.5 2.0 2.5 3.0]
y=[0 1 2 3 4 5]
z=[0 2 4 6 8 10]
subplot(1,3,1)
plot(x,y,'r*-')
xtitle('subplot 1')
xlabel('x-axis')
ylabel('y-axis')
xstring(1,0.5,'line 1')
xgrid()
subplot(1,3,2)
plot(x,y,'g+-')
xtitle('subplot 2')
xlabel('x-axis')
ylabel('y-axis')
xstring(1,2,'line 2')
xgrid()
subplot(1,3,3) 
plot(x,y,'b*-')
xtitle('subplot 3')
xlabel('x-axis')
ylabel('y-axis')
xstring(1,0.5,'line 3')
xgrid()



