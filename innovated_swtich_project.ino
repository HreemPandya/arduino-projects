int greenPin = 6;
int bluePin = 10;
int yellowPin = 11;
int potPin1 = A3;
int potPin2 = A2;
int potPin3 = A1;

void setup() {
  // put your setup code here, to run once:
 pinMode(greenPin, OUTPUT);
 pinMode(potPin1, INPUT);
 pinMode(bluePin, OUTPUT);
 pinMode(potPin2, INPUT);
 pinMode(yellowPin, OUTPUT);
 pinMode(potPin3, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int potRead = analogRead(potPin1);
 int ledVal = map(potRead, 0, 1023, 0, 255);
 analogWrite(greenPin, ledVal);
 Serial.println(ledVal);
 //space
 int potRead2 = analogRead(potPin2);
 int ledVal2 = map(potRead2, 0, 1023, 0, 255);
 analogWrite(bluePin, ledVal2);
 Serial.println(ledVal2);
 //space
 int potRead3 = analogRead(potPin3);
 int ledVal3 = map(potRead3, 0, 1023, 0, 255);
 analogWrite(yellowPin, ledVal3);
 Serial.println(ledVal3);
}
