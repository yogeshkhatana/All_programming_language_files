x=[10 24 19 38 15]
y=[0 0 1 0 1]
subplot(1,3,1)  
pie(x)
title('simple pie chart')
subplot(1,3,2)
pie(x,['cement','water','air','telecom','software'])
title('pie chart with label')
subplot(1,3,3)
label=({'cement','telecom','software','air','water'})
pie(x,y,label)
title('piechart with slice & label')
