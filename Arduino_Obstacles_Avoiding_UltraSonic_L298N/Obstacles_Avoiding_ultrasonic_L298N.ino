#include <Servo.h>          //Servo motor library. This is standard library
#include <NewPing.h>        //Ultrasonic sensor function library. You must install this library

//our L298N control pins
const int LF = 5;// left forward motor
const int LB = 4;// left backward motor
const int RF = 6; // right forward motor
const int RB = 7;// right backward motor
const int ENA = 3;
const int ENB = 9;

//ultrasonic sensor pins , trig , echo 
#define trig_pin A4  //analog input 4
#define echo_pin A5 //analog input 5

#define maximum_distance 200
boolean goesForward = false;
int distance = 100;

NewPing sonar(trig_pin, echo_pin, maximum_distance); //sensor function
Servo servo_head; //our servo name


void setup(){

  pinMode(RF, OUTPUT);
  pinMode(LF, OUTPUT);
  pinMode(LB, OUTPUT);
  pinMode(RB, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  servo_head.attach(11); //our servo pin
  servo_head.write(90);
  
  delay(2000);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
}

void loop(){
  digitalWrite(ENA, 190);
   digitalWrite(ENB, 190);
  int distanceRight = 0;
  int distanceLeft = 0;
  delay(50);
 // change direction if obstacle within 30cm 
  if (distance <= 30){
    moveStop();
    delay(300);
    moveBackward();
    delay(400);
    moveStop();
    delay(300);
    distanceRight = lookRight();
    delay(300);
    distanceLeft = lookLeft();
    delay(300);

    if (distance >= distanceLeft){
      turnRight();
      moveStop();
    }
    else{
      turnLeft();
      moveStop();
    }
  }
  // move forward if no obstacle in 30 cm 
  else{
    moveForward(); 
  }
    distance = readPing();
}

int lookRight(){  
  servo_head.write(10);
  delay(500);
  int distance = readPing();
  delay(100);
  servo_head.write(90);
  return distance;
}

int lookLeft(){
  servo_head.write(170);
  delay(500);
  int distance = readPing();
  delay(100);
  servo_head.write(90);
  return distance;
  delay(100);
}

int readPing(){
  delay(70);
  int cm = sonar.ping_cm();
  if (cm==0){
    cm=250;
  }
  return cm;
}

void moveStop(){
  
  digitalWrite(RF, LOW);
  digitalWrite(LF, LOW);
  digitalWrite(RB, LOW);
  digitalWrite(LB, LOW);
}

void moveForward(){
  
  // if motor is slow or not working try increasing these values 
  analogWrite(ENA, 115);
   analogWrite(ENB, 115);
  if(!goesForward){

    goesForward=true;
    
    digitalWrite(LF, HIGH);
    digitalWrite(RF, HIGH);
  
    digitalWrite(LB, LOW);
    digitalWrite(RB, LOW); 
  }
}

void moveBackward(){
 digitalWrite(ENA, 100);
   digitalWrite(ENB, 100);
  goesForward=false;

  digitalWrite(LB, HIGH);
  digitalWrite(RB, HIGH);
  
  digitalWrite(LF, LOW);
  digitalWrite(RF, LOW);
  
}

void turnRight(){
   digitalWrite(ENA, 100);
   digitalWrite(ENB, 100);
  digitalWrite(LF, HIGH);
  digitalWrite(RB, HIGH);
  
  digitalWrite(LB, LOW);
  digitalWrite(RF, LOW);
  
  delay(500);
  
  digitalWrite(LF, HIGH);
  digitalWrite(RF, HIGH);
  
  digitalWrite(LB, LOW);
  digitalWrite(RB, LOW);
 
  
  
}

void turnLeft(){
   digitalWrite(ENA, 100);
   digitalWrite(ENB, 100);
  digitalWrite(LB, HIGH);
  digitalWrite(RF, HIGH);
  
  digitalWrite(LF, LOW);
  digitalWrite(RB, LOW);

  delay(500);
  
  digitalWrite(LF, HIGH);
  digitalWrite(RF, HIGH);
  
  digitalWrite(LB, LOW);
  digitalWrite(RB, LOW);
}
