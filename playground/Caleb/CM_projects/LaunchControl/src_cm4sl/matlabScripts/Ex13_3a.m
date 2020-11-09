% A separate file Ex13_3a.m
function xdot=Ex13_3a(t,x);

% Define the simulation parameters:
m=1400; 
rho=1.202; 
Cd=0.5; 
A=1.95; 
g=9.81;
Theta=0.0; 
bw=0.0; 
f=0.01; 
uw=0.0; 
fw=0.0;
Iw=2.65; 
rw=0.31; 
Nw=4; 
Fz=3560.0;

% Define the mu-lambda polynomial coefficients:
c=[-68.593, 238.216,-324.819,219.283, -75.58, 12.088, -0.0068];

if x(1) >= x(2),
    lambda=(x(2)-x(1))/x(1);
else
    lambda=(x(2)-x(1))/x(2);
end;            

al = abs(lambda);
if al > 1.0, al =1.0; end;

mu=sign(lambda)*c*[al^6;al^5; al^4;al^3;al^2;al;1];

% Define the torque input T = Te - Tb;
Te =0.0; 
Tb=1000.0;
T = Te - Tb;

% Define the state equations:
if x(1) < 0.0, x(1) = 0.0; end;
if x(2) < 0.0, x(2) = 0.0; end;

xdot=[(-(0.5*rho*Cd*A)*(uw+rw*x(1))^2+Nw*Fz*mu-f*m*g*cos(Theta)-m*g*sin(Theta))/(m*rw);(fw*Fz-bw*x(2)-Fz*rw*mu+T)/Iw];

if x(1) <= 0.0, xdot(1)=0.0; end;
if x(2) <= 0.0, xdot(2)=0.0; end;