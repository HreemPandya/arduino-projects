int trigger = 7;
int echo = 6;

long duration;
float distance;

int redLed = 4;
int greenLed = 3;

void setup() {
  // put your setup code here, to run once:
 pinMode(trigger, OUTPUT);
 pinMode(echo, INPUT);
 Serial.begin(9600);
 pinMode(redLed, OUTPUT);
 pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trigger, LOW);
 delayMicroseconds(2);

 digitalWrite(trigger, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger, LOW);

 duration = pulseIn(echo, HIGH);
 distance = (duration * 0.034)/2;

 Serial.print("Distance: ");
 Serial.print(distance);;
 Serial.println(" cm");

  if(distance <= 4.0){
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
   }

  else{
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
   }
  delay(500);

}
