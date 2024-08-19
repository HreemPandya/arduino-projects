#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd;

void setup() {
  // put your setup code here, to run once:
 lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
 lcd.setCursor(0,0);
 lcd.print("Hi, I'm Avika");

 lcd.setCursor(0,1);
 lcd.print("Purple");

 delay(4000);

 lcd.clear();

 lcd.setCursor(0,0);
 lcd.print("Painting");

 lcd.setCursor(0,1);
 lcd.print("Pizza");

 delay(4000);

 lcd.clear();

 lcd.setCursor(0,0);
 lcd.print("Bye");

 lcd.setCursor(0,1);
 lcd.print("bye");

 delay(4000);

 lcd.clear();
}
