##  Robot arm Arduino circuit
##### The Robot arm is setup as four parts, From up to bottom "Wrist, Elbow, Shoulder, Base", each part has it's own servo motor 
##### We need the upper three servos to be at 90 degrees initially to position the arm up

##### ![servos_with_joystick](https://user-images.githubusercontent.com/49666154/127266428-9e9b8bb4-2fd6-4ac9-b997-314c87fe5f0f.jpeg)
#
#### STEPS:
- - #### build Arduino circuit with four servo motors 
- - #### program all servos to start at 90 as the initial position (except base)
- - #### control servos by A changing resistance (joystick)
 ##
#### Parts:
- - #### Four Servo Motors: 
 ###### "base" servo mg995, "shoulder" servo mg995, "elbow" servo mg995, "wrist" servo g9
- - #### Joystick: 
 ###### simple joystick, comes with the Arduino kit connected to the A0 and A1 as 'y' and 'x' axis
![circuit](https://user-images.githubusercontent.com/49666154/127266488-fc4c3b7b-79ad-478b-b42a-12b9e5feaa0a.jpeg)
#
#### Files:
- #### joystick_control_Recording.mp4
 > ##### Recording for controlling the (shoulder & elbow ) servos with joystick
- #### servo_jstick
> ##### contains the main sketch that i've wrote to program the servos to 90 degrees (except base), and to control (elbow & shoulder) servos with joystick 


  

