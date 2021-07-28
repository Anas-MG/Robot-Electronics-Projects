#include <Servo.h>
int wristPin=9;
int wristPos=90;
//controlled by joystic
int elbowPin=11;
//controlled by joystic
int shoulderPin=12;

int basePin=10;
int basePos=0;
//define our servos 
Servo base;
Servo shoulder;
Servo elbow;
Servo wrist;



//define joiystick pins (Analog)
int joyX=0;
int joyY=1;
 
//variable to read the values from the analogn pins
int joyVal;

void setup() {
  //
 
  Serial.begin(9600);
  wrist.attach(wristPin);
  base.attach(basePin);
  elbow.attach(elbowPin);
  shoulder.attach(shoulderPin);
}

void loop() {

    base.write(basePos);
    wrist.write(wristPos);
//    elbow.write(elbowPos);
//    shoulder.write(shoulderPos);
   
  //Read the joy value
    joyVal = analogRead(joyX);
    joyVal= map (joyVal, 90, 1023, 0, 160);//servo value between 0-160 degrees, inital 90 degrees
    shoulder.write(joyVal);
    
    //Read Y axis JoyVal
    joyVal = analogRead(joyY);
    joyVal= map (joyVal, 90, 1023, 0, 160);//servo value between 0-160 degrees, inital 90 degrees
    elbow.write(joyVal);
  
  
  
  
}
