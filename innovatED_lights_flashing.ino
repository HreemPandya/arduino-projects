int greenPin = 10;
int yellowPin = 7;
int redPin = 6;

int shortDelay = 2000;
int longDelay = 6000;
int mediumDelay = 5000;

String whatDayOfTheWeekIsIt = "Sunday";

void setup() {
  // put your setup code here, to run once:
 pinMode(greenPin, OUTPUT);
 pinMode(yellowPin, OUTPUT);
 pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(greenPin, HIGH);
 delay(longDelay);
 digitalWrite(greenPin, LOW);

 digitalWrite(yellowPin, HIGH);
 delay(shortDelay);
 digitalWrite(yellowPin, LOW);

 digitalWrite(redPin, HIGH);
 delay(mediumDelay);
 digitalWrite(redPin, LOW);
}
