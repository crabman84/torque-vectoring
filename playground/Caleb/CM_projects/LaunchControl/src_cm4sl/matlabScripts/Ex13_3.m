% Ex13_3.m
ti=0.0; 
tf=1.0; 
xi=[20.0,20.0];
tol=1.0e-4; 
trace=1;

[t,x]=ode45('Ex13_3a',ti,tf,xi,tol,trace);
plot(t,x); title('Vehicle Braking');

xlabel('Time (sec)'); ylabel('x'); grid;
legend('Forward speed','Wheel speed')