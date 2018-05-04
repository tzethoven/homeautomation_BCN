instrreset
clear all 
close all 
clc


%% open serial connection

port = 'COM10';

s = serial(port);
fopen(s);

%% read serial connection
vals = [];
for i=1:100
    n = s.BytesAvailable;
    vals(i) = fscanf(s, '%f');
    pause(0.15);
end
disp(vals);



%% close serial connection

fclose(s);
instrreset