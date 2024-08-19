#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

#include <DHT11.h>

hd44780_I2Cexp lcd;

int dhtPin = 7;
DHT11 dht11(dhtPin);

void setup() {
  // put your setup code here, to run once:
 lcd.begin(16, 2);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int temperature = dht11.readTemperature();
 int humidity = dht11.readHumidity();

 lcd.setCursor(0,0);
 lcd.print("Temp: ");
 lcd.setCursor(6,0);
 lcd.print(temperature);

 lcd.setCursor(0,1);
 lcd.print("Humidity: ");
 lcd.setCursor(8,1);
 lcd.print(humidity);

}