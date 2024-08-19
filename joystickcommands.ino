#include <Servo.h>
Servo motor;
int servoPin = 11;

int vrx = A4;
int vry = A5;
int sw = 3;

void setup() {
  // put your setup code here, to run once:
 pinMode (vrx, INPUT);
 pinMode (vry, INPUT);
 pinMode(sw, INPUT_PULLUP);

 motor.attach(servoPin);
 motor.write(0);

 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int vrxVal = analogRead(vrx);
 int vryVal = analogRead(vry);
 int swVal = digitalRead(sw);

 int servoAngle = map(vrxVal, 0, 1023, 0, 180);

 Serial.println(servoAngle);
 motor.write(servoAngle);
 
 Serial.print("vrx value: ");
 Serial.print(vrxVal);
 Serial.print(" vry value: ");
 Serial.println(vryVal);
 Serial.print("  sw value: ");
 Serial.println(swVal);

 delay(100);
}
