## Obstacle Avoiding Robot 
<img src="https://user-images.githubusercontent.com/49666154/128777013-b7dc23f8-97eb-4035-8ff5-7018e988c99e.jpeg" width="600px">

##### This Robot is an Arduino based robot that uses Ultrasonic sensor to avoid obstacles in range. when the robot faces an obstacle in range , automatically it'll stop moving forward and takes a step back. Then it looks left & right and starts  moving to the farest side, The best use of this robot is navigating in an unknown enviroment , cleaning.

## Components required To build:
##### 1-Arduino Uno
##### 2-Ultrasonic sensor 
##### 3-L298N H-bridge
##### 4-Four DC motors with wheels
##### 5-Servo motor 
##### 7-Two 9V batteries to power Arduino and L298N seperately 
##### 8-Base


## Understanding Ultrasonic
##### To understand how the robot avoid obstacles we need to understand how Ultrasonic sensors works firstly, In general Ultrasonic is small sensor that measures distance by using ultrasonic waves. (high-frequency sound 40 kHz),
<img src="https://user-images.githubusercontent.com/49666154/128789780-a4d26741-6375-4f4c-9cf5-43eacd2d3353.jpg"  width='500'>

##### The sensor logic is that the sensor head (trig pin) emits an ultrasonic wave , If it hits an object The ultrasound receiver (echo pin) receives the reflected wave. Then it measures the distance to the target by measuring the time between the emission and reception.

#### Module US-100 sensor 
<img src="https://user-images.githubusercontent.com/49666154/128775606-cf680125-5f0a-4e25-acf3-aed08514173a.jpeg" width="400px" >

##### It's compact, high-quality Ultrasonic module for distance measurement , it can measure up to a distance of 3.5-meters range, Unlike other ultrasonic sensors, there is a build-in temperature sensor for accurate ranging. This sensor can work in UART mode or GPIO mode
<img src="https://user-images.githubusercontent.com/49666154/128776680-0c556eb4-132e-44ec-9fb7-a18aa24b4692.jpeg" width="300px" >

###### This project uses GPIO mode, to use this mode we need to remove the jumper on the back.


## Understanding L298N H-bridge motor driver  
<img src="https://user-images.githubusercontent.com/49666154/128776326-36a2416f-9356-49f9-842e-ab9bff2704f0.jpeg" width="300px" >


##### The L298N is a dual H-Bridge motor driver which allows speed and direction control of two DC motors at the same time. it won't allow the independent control of four motors, but you could possibly connect two in parallel to each output, like this project. 
<img src="https://user-images.githubusercontent.com/49666154/128803887-7bc041e8-9c74-42aa-8f75-aa2c68efa30d.png" width="400px" >

- ##### IN1-IN2 and IN2-IN4 pins controles direction
- ##### ENA & ENB pins are puls width modulation pins that controls the speed 
 

## Circuit Diagram 
##### in tinkercard there is no simulation for L298N Hbridge , so this is a diagram without L298N
<img src="https://user-images.githubusercontent.com/49666154/128796839-eb103055-0cc1-40ef-912f-0b16a2ba85eb.png" width="600px" >

##### L298N Circuit made in different app named fritzing
<img src="https://user-images.githubusercontent.com/49666154/128802099-04509fea-fe68-4758-98c9-25a9d9868b3b.png" width="400px" >

##### The only difference from this one is that the project consist of four DC motors each two connected in parallel as shown in picture bellow

<img src="https://user-images.githubusercontent.com/49666154/128805047-64afe450-2185-4492-aa1d-4e82cee50793.jpeg" width="300px" >



## Obstacle Avoider in field
https://user-images.githubusercontent.com/49666154/128778157-4c76af22-ae89-4151-b63f-5991b3715af8.mp4

