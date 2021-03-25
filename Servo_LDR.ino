//based on example code from Technical Team, REES52

#include <Servo.h>     // Library for Servo Motor

int ldrpin=0;// initialize analog pin 0, connected with photovaristor
int val=0;// initialize variable val

Servo myServo;   // define servo name

void setup() {

Serial.begin(9600);   // set baud rate at “9600”
myServo.attach(9);   // servo pin - digital pin 9
myServo.write(0);     // servo start position
}

void loop() {

val=analogRead(ldrpin);// read the analog value of the sensor and assign it to val

Serial.println(val);// display the value of val

delay(15);// wait for 0.015

// incoming value from LDR dependant ambient light (around 500 right now), totally obscured at around 710

if(val>550) {
 myServo.write(0); 
}
else {
   myServo.write(50);
  }
}
