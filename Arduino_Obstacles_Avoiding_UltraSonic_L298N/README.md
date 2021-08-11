## Obstacles Avoiding Robot 
<img src="https://user-images.githubusercontent.com/49666154/128967478-478a53ad-bff2-4247-aead-74993148c463.jpeg" width="800px">

##### This Robot is an Arduino based robot that uses Ultrasonic sensor to avoid obstacles in range. when the robot faces an obstacle in range , automatically it'll stop moving forward and takes a step back. Then it looks left & right and starts  moving to the farest side, The best use of this robot is navigating in an unknown enviroment , cleaning.

## Components required To build:
##### 1-Arduino Uno
##### 2-Ultrasonic sensor 
##### 3-L298N H-bridge
##### 4-Four DC motors 3-6 volts, wheels
##### 5-Servo motor 
##### 7-Two 9V batteries to power Arduino and L298N seperately 
##### 8-Base, Jumper wires male to female, Male to male


## How Ultrasonic detct obstacles?

<img src="https://user-images.githubusercontent.com/49666154/128789780-a4d26741-6375-4f4c-9cf5-43eacd2d3353.jpg"  width='600'>

##### To understand how the robot avoid obstacles we need to understand how Ultrasonic sensors works , Ultrasonic is small sensor that measures distance by using ultrasonic waves. (high-frequency sound 40 kHz), The sensor's logic starts with the sensor head (trig pin) emits an ultrasonic wave , If it hits an object The ultrasound receiver (echo pin) receives the reflected wave. Then it measures the distance to the target by measuring the time between the emission and reception.

#### Module US-100 
#
<img src="https://user-images.githubusercontent.com/49666154/128775606-cf680125-5f0a-4e25-acf3-aed08514173a.jpeg" width="380px" ><img src="https://user-images.githubusercontent.com/49666154/128776680-0c556eb4-132e-44ec-9fb7-a18aa24b4692.jpeg" width="190px" >

##### It's compact, high-quality Ultrasonic module used in this project, it can measure up to a distance of 3.5-meters range.
- ###### This sensor can work in UART mode or GPIO mode, The project is suitable for GPIO mode , to enable GPIO you need to remove the jumper in the back as shown.


## Understanding L298N H-bridge motor driver  
<img src="https://user-images.githubusercontent.com/49666154/128776326-36a2416f-9356-49f9-842e-ab9bff2704f0.jpeg" width="300px" > <img src="https://user-images.githubusercontent.com/49666154/128803887-7bc041e8-9c74-42aa-8f75-aa2c68efa30d.png" width="400px" >

##### The L298N is a dual H-Bridge motor driver which allows speed and direction control of two DC motors at the same time. it won't allow the independent control of four motors, but you could possibly connect two in parallel to each output, like this project. It's recommended to power it with 7-12 volts.

- ##### Outx pins for the dc motors
- ##### IN1-IN2 and IN2-IN4 pins controles direction 
- ##### ENA & ENB pins are puls width modulation pins that controls the speed
 

## Circuit Diagram - Tinkercard
##### Robot circuit without L298N and Dc motors
> ##### The project diagram should contain L298N Circuit but Tinkercard dosen't offer L298N, There is other circuit attached explaning L298N connection.
<img src="https://user-images.githubusercontent.com/49666154/128810985-fdf2664e-83c6-4a8d-a168-b4ce82bab137.png" width="700px" >

##### L298N circuit 
> ##### The only difference here is that the project consist of four DC motors each two connected in 'parallel' to the L298N Out pins as shown in picture 

<img src="https://user-images.githubusercontent.com/49666154/128802099-04509fea-fe68-4758-98c9-25a9d9868b3b.png" width="470px" ><img src="https://user-images.githubusercontent.com/49666154/128805047-64afe450-2185-4492-aa1d-4e82cee50793.jpeg" width="370px" >

#### To clearify, The project consist of the two circuits with one arduino UNO and two power sources as shown in picture below 
<img src="https://user-images.githubusercontent.com/49666154/128967453-e50a5228-fb1b-4a94-ac91-587ae575cb46.jpeg" width="370px" >
#### The power sources is seperated so L298N can properly handle four DC motors.

## Obstacles Avoiding Robot in field
https://user-images.githubusercontent.com/49666154/128778157-4c76af22-ae89-4151-b63f-5991b3715af8.mp4

