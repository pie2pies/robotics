#include <Servo.h>
Servo LeftFrontWheel;
Servo RightFrontWheel;
//Servo LeftBackWheel;
//Servo RightBackWheel;
//bluetooth
#include <SoftwareSerial.h>
SoftwareSerial mySoftwareSerial(12, 13); // RX | TX
char command;

void setup() {
  // put your setup code here, to run once:
  LeftFrontWheel.attach(3, 1000, 2000);
  RightFrontWheel.attach(5, 1000, 2000);
  //LeftBackWheel.attach(?, 1000, 2000);
  //RightBackWheel.attach(?, 1000, 2000);
  //bluetooth
  Serial.begin(9600);
  Serial.println("Starting i guess?");
  mySoftwareSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  LeftFrontWheel.writeMicroseconds(1500);
  RightFrontWheel.writeMicroseconds(1500);
  //LeftBackWheel.writeMicroseconds(1500);
  //RightBackWheel.writeMicroseconds(1500);
  //bluetooth
  if (mySoftwareSerial.available()) {
    command = mySoftwareSerial.read();
    Serial.println(command);

    if (command == 'F') {
      Serial.println("moveForward");
      //moveForward();

      if (command == 'B') {
        Serial.println("moveBackward");
        //moveBackward();

        if (command == 'L') {
          Serial.println("moveSidewaysLeft");
          //moveSidewaysLeft();

          if (command == 'R') {
            Serial.println("moveSidewaysRight");
            //moveSidewaysRight();

            /*    if (command == 'G') {
                  Serial.println("moveLeftForward");
                  //moveLeftForward(); }

                  if (command == 'I') {
                    Serial.println("moveRightForward");
                    //moveRightForward(); }

                    if (command == 'J') {
                      Serial.println("moveRightBackward");
                      //moveRightBackward();}

                      if (command == 'H') {
                        Serial.println("moveLeftBackward");
                        //moveLeftBackward(); }
                        
                        if (command == '?') {
                        Serial.println("rotateLeft");
                        //rotateLeft(); }
                        
                        if (command == '?') {
                        Serial.println("rotateRight");
                        //rotateRight(); }
                        
                         if (command == '?') {
                        Serial.println("stopMoving");
                        //stopMoving(); }
                        */
          }
        }
      }
    }
  }
}

void moveForward() {
  LeftFrontWheel.writeMicroseconds(1600);
  //LeftBackWheel.writeMicroseconds(1600);
  RightFrontWheel.writeMicroseconds(1600);
  //RightBackWheel.writeMicroseconds(1600);
}

void moveBackward() {
  LeftFrontWheel.writeMicroseconds(-1600);
  //LeftBackWheel.writeMicroseconds(-1600);
   RightFrontWheel.writeMicroseconds(-1600);
  //RightBackWheel.writeMicroseconds(-1600);
}
void moveSidewaysRight() {
  LeftFrontWheel.writeMicroseconds(1600);
  //LeftBackWheel.writeMicroseconds(1400);
  RightFrontWheel.writeMicroseconds(1400);
  //RightBackWheel.writeMicroseconds(1600);
}

void moveSidewaysLeft() {
  LeftFrontWheel.writeMicroseconds(1400);
  //LeftBackWheel.writeMicroseconds(1600);
  RightFrontWheel.writeMicroseconds(1600);
 // RightBackWheel.writeMicroseconds(1400);
}


void rotateLeft() {
  LeftFrontWheel.writeMicroseconds(1400);
  //LeftBackWheel.writeMicroseconds(1400);
  RightFrontWheel.writeMicroseconds(1600);
 // RightBackWheel.writeMicroseconds(1600);
}

void rotateRight() {
  LeftFrontWheel.writeMicroseconds(1600);
 // LeftBackWheel.writeMicroseconds(1600);
  RightFrontWheel.writeMicroseconds(1400);
  //RightBackWheel.writeMicroseconds(1400);
}

void moveRightForward() {
  LeftFrontWheel.writeMicroseconds(1600);
  //LeftBackWheel.writeMicroseconds(1500);
  RightFrontWheel.writeMicroseconds(1500);
  //RightBackWheel.writeMicroseconds(1600);
}

 void moveRightBackward() {
  LeftFrontWheel.writeMicroseconds(1500);
  //LeftBackWheel.writeMicroseconds(1400);
  RightFrontWheel.writeMicroseconds(1400);
  //RightBackWheel.writeMicroseconds(1500);
}
void moveLeftForward() {
  LeftFrontWheel.writeMicroseconds(1500);
  //LeftBackWheel.writeMicroseconds(1600);
  RightFrontWheel.writeMicroseconds(1600);
  //RightBackWheel.writeMicroseconds(1500);
}                 
void moveLeftBackward() {
  LeftFrontWheel.writeMicroseconds(1400);
  //LeftBackWheel.writeMicroseconds(1500);
  RightFrontWheel.writeMicroseconds(1500);
  //RightBackWheel.writeMicroseconds(1400);
}

void stopMoving() {
  LeftFrontWheel.writeMicroseconds(1500);
  //LeftBackWheel.writeMicroseconds(1500);
  RightFrontWheel.writeMicroseconds(1500);
  //RightBackWheel.writeMicroseconds(1500);
}
