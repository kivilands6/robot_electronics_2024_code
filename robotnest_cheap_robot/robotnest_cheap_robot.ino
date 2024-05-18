// C++ code
//
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

char inputFromUserBT = 0;
char inputFromUser = 0;

int leftMotorA = A0;
int leftMotorB = A1;
int rightMotorA = A2;
int rightMotorB = A3;

bool motorState = false;
float servoAngle = 90;
int maxServoAngle = 180;
int minServoAngle = 30;

int motorPin = 12;

String receivedStringBT;

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  mySerial.println("start bt");
  Serial.println("start usb");
  pinMode(leftMotorA, OUTPUT);
  pinMode(leftMotorB, OUTPUT);
  pinMode(rightMotorA, OUTPUT);
  pinMode(rightMotorB, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(10, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  
  if(Serial.available() > 0 || mySerial.available() > 0) {
    if (Serial.available() > 0) {
      inputFromUser = Serial.read();
      Serial.println(inputFromUser);
      Serial.println(strlen(inputFromUser));
    }
    if (mySerial.available() > 0) {
      inputFromUser = mySerial.read();
      Serial.println(inputFromUser);
    }

    // F B L R
    switch(inputFromUser) {

      case 't':
      if(motorState) {
        digitalWrite(motorPin, 0);
        motorState = false;
      } else {
        digitalWrite(motorPin, 1);
        motorState = true;
      }
      while(mySerial.available() == 0){}
      break;

      case 'f':

      digitalWrite(leftMotorA, LOW);
      digitalWrite(leftMotorB, HIGH);
      digitalWrite(rightMotorA, HIGH);
      digitalWrite(rightMotorB, LOW);

      while(mySerial.available() == 0){}

      digitalWrite(leftMotorA, LOW);
      digitalWrite(leftMotorB, LOW);
      digitalWrite(rightMotorA, LOW);
      digitalWrite(rightMotorB, LOW);

      break;
      
      case 'b':
      digitalWrite(leftMotorA, LOW);
      digitalWrite(leftMotorB, HIGH);
      digitalWrite(rightMotorA, LOW);
      digitalWrite(rightMotorB, HIGH);

      while(mySerial.available() == 0){}

      digitalWrite(leftMotorA, LOW);
      digitalWrite(leftMotorB, LOW);
      digitalWrite(rightMotorA, LOW);
      digitalWrite(rightMotorB, LOW);
      break;
      
      case 'l':
      digitalWrite(leftMotorA, LOW);
      digitalWrite(leftMotorB, HIGH);
      digitalWrite(rightMotorA, HIGH);
      digitalWrite(rightMotorB, LOW);

      while(mySerial.available() == 0){}

      digitalWrite(leftMotorA, LOW);
      digitalWrite(leftMotorB, LOW);
      digitalWrite(rightMotorA, LOW);
      digitalWrite(rightMotorB, LOW);
      break;
      
      case 'r':
      digitalWrite(leftMotorA, HIGH);
      digitalWrite(leftMotorB, LOW);
      digitalWrite(rightMotorA, LOW);
      digitalWrite(rightMotorB, HIGH);

      while(mySerial.available() == 0){}

      digitalWrite(leftMotorA, LOW);
      digitalWrite(leftMotorB, LOW);
      digitalWrite(rightMotorA, LOW);
      digitalWrite(rightMotorB, LOW);
      break;

    }
  }
}

