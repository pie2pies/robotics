#include <Servo.h>
Servo esc1;
Servo esc2;
//Servo esc3;
//Servo esc4;
//bluetooth
#include <SoftwareSerial.h>
SoftwareSerial mySoftwareSerial(12,13); // RX | TX
char command;

void setup() {
  // put your setup code here, to run once:
esc1.attach(3, 1000, 2000);
esc2.attach(5, 1000, 2000);
//esc3.attach(9, 1000, 2000);
//esc4.attach(10, 1000, 2000);
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
if (mySoftwareSerial.available()){
      command = mySoftwareSerial.read();
      Serial.println(command);

      if (command == 'F') {
        Serial.println("forward");
        
      if (command == 'B') {
        Serial.println("back");

      if (command == 'L') {
        Serial.println("left"); 

      if (command == 'R') {
        Serial.println("right"); 

}
}
}}}}

void forward(){
//esc1.attach(3, 1000, 2000);
//esc2.attach(5, 1000 2000);
//esc3.attach(?, 1000, 2000);
//esc4attach(?, 1000, 2000); dont think its needed might be wrong (likely)
  esc1.writeMicroseconds(1600);
  esc2.writeMicroseconds(1600);
//esc3.writeMicroseconds(1600);
//esc4.writeMicroseconds(1600);
}

void back(){
//esc1.attach(3, 1000, 2000);
//esc2attach(5, 1000, 2000);
//esc3attach(? 1000, 2000);
//esc4attach(? 1000, 2000); dont think its needed might be wrong (likely)
  esc1.writeMicroseconds(1400);
  esc2.writeMicroseconds(1400);
//esc3.writeMicroseconds(1400);
//esc4.writeMicroseconds(1400);
}





