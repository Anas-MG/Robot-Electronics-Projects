## Obstacle Avoiding Robot 
<img src="https://user-images.githubusercontent.com/49666154/128777013-b7dc23f8-97eb-4035-8ff5-7018e988c99e.jpeg" width="600px">

#### This Robot is an Arduino based robot that uses Ultrasonic sensor to find and avoid obstacles in range.  It's fully autonomous robot that is able to avoid any obstacle it face when moving around. when the robot face an obstacle in range while it's moving forward, automatically  it'll stop moving forward and takes a step back. Then it looks left & right and starts to move the farest side, The best use of this robot is navigating in an unknown enviroment , and cleaning ofcourse ^^

## Components required To build:
##### 1-Arduino Uno
##### 2-Ultrasonic sensor 
###### if you are using ultrasonic us-100 you need to remove the jumper like below picture in order to work with trig and echo pins
##### 3-L298N H-bridge
##### 4-Four DC motors with wheels
##### 5-Servo motor 
##### 7-Two 9V batteries to power Arduino and L298N seperately 
##### 8-Base


## Understanding Ultrasonic
#### Ultrasonic sensors are small sensors that measures distance by using ultrasonic waves. 
<img src="https://user-images.githubusercontent.com/49666154/128789780-a4d26741-6375-4f4c-9cf5-43eacd2d3353.jpg"  >

#### The sensor head (trig pin) emits an ultrasonic wave which is a high-frequency sound (40 kHz), If it hits an object The ultrasound receiver (echo pin) receives the reflected wave from the object. Measuring the distance to the target can be done by measuring the time between the emission and reception.

#### Module US-100 sensor 
<img src="https://user-images.githubusercontent.com/49666154/128775606-cf680125-5f0a-4e25-acf3-aed08514173a.jpeg" width="400px" >

#### It's compact, high-quality Ultrasonic module i've used for distance measurement , it can measure up to a distance of 3.5-meters range, Unlike the other ultrasonic sensor, there is a build-in temperature sensor on the US-100 for accurate ranging even on varying ambient temperatures. this sensor works in UART mode (band rate 9600) or GPIO mode When the jumper on the back is removed.
<img src="https://user-images.githubusercontent.com/49666154/128776680-0c556eb4-132e-44ec-9fb7-a18aa24b4692.jpeg" width="400px" >

##### In this project it's used in GPIO mode.



## Understanding L298N H-bridge motor driver  
<img src="https://user-images.githubusercontent.com/49666154/128776326-36a2416f-9356-49f9-842e-ab9bff2704f0.jpeg" width="300px" >

#### The L298N is a dual H-Bridge motor driver which allows speed and direction control of two DC motors at the same time. it won't allow the independent control of four motors, but you could possibly connect two in parallel to each output, as I did in this project.
<img src="https://user-images.githubusercontent.com/49666154/128776396-7c9b2c4b-27be-4bf1-bd8c-2dac54d20e8d.jpeg" width="110px" >

## Circuit Diagram 
##### in tinkercard there is no simulation for L298N Hbridge , so this is a diagram without L298N , and I brought another curcuit to explaining L298N



https://user-images.githubusercontent.com/49666154/128778157-4c76af22-ae89-4151-b63f-5991b3715af8.mp4

