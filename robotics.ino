#include <Servo.h>
Servo esc1;
Servo esc2;
//Servo esc3;
//Servo esc4;
//bluetooth
#include <SoftwareSerial.h>
SoftwareSerial mySoftwareSerial(12, 13); // RX | TX
char command;

void setup() {
  // put your setup code here, to run once:
  esc1.attach(3, 1000, 2000);
  esc2.attach(5, 1000, 2000);
  //esc3.attach(?, 1000, 2000);
  //esc4.attach(?, 1000, 2000);
  //bluetooth
  Serial.begin(9600);
  Serial.println("Starting i guess?");
  mySoftwareSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  esc1.writeMicroseconds(1500);
  esc2.writeMicroseconds(1500);
  //esc3.writeMicroseconds(1500);
  //esc4.writeMicroseconds(1500);
  //bluetooth
  if (mySoftwareSerial.available()) {
    command = mySoftwareSerial.read();
    Serial.println(command);

    if (command == 'F') {
      Serial.println("forward");
      //foward();

      if (command == 'B') {
        Serial.println("back");
        //back();

        if (command == 'L') {
          Serial.println("left");
          //left();

          if (command == 'R') {
            Serial.println("right");
            //right();

            /*    if (command == '?') {
                  Serial.println("45 diagonal foward left");
                  //fl(); }

                  if (command == '?') {
                    Serial.println("45 diagonal foward right");
                    //fr(); }

                    if (command == '?') {
                      Serial.println("45 diagonal back right");
                      //br();}

                      if (command == '?') {
                        Serial.println("45 diagonal back left");
                        //bl(); }*/
          }
        }
      }
    }
  }
}

void forward() {
  esc1.writeMicroseconds(1600);
  esc2.writeMicroseconds(1600);
  //esc3.writeMicroseconds(1600);
  //esc4.writeMicroseconds(1600);
}

void back() {
  esc1.writeMicroseconds(1400);
  esc2.writeMicroseconds(1400);
  //esc3.writeMicroseconds(1400);
  //esc4.writeMicroseconds(1400);
}

void right() {
  esc1.writeMicroseconds(1600);
  esc2.writeMicroseconds(1400);
  //esc3.writeMicroseconds(1400);
  //esc4.writeMicroseconds(1600);
}

void left() {
  esc1.writeMicroseconds(1400);
  esc2.writeMicroseconds(1600);
  //esc3.writeMicroseconds(1600);
  //esc4.writeMicroseconds(1400);
}

void fl() {
  esc1.writeMicroseconds(1500);
  esc2.writeMicroseconds(1600);
  //esc3.writeMicroseconds(1600);
  //esc4.writeMicroseconds(1500);
}

void fr() {
  esc1.writeMicroseconds(1600);
  esc2.writeMicroseconds(1500);
  //esc3.writeMicroseconds(1500);
  //esc4.writeMicroseconds(1600);
}

void bl() {
  esc1.writeMicroseconds(1400);
  esc2.writeMicroseconds(1500);
  //esc3.writeMicroseconds(1500);
  //esc4.writeMicroseconds(1400);
}

void br() {
  esc1.writeMicroseconds(1500);
  esc2.writeMicroseconds(1400);
  //esc3.writeMicroseconds(1400);
  //esc4.writeMicroseconds(1500);
}
