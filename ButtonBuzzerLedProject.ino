int blueButton = 9;
int yellowButton = 5;
int ledPin = 4;
int buzzPin = 3;

int ledState = HIGH;

int pushButtonNew;
int pushButtonOld = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode(blueButton, INPUT);
 pinMode(yellowButton, INPUT);

 pinMode(ledPin, OUTPUT);
 pinMode(buzzPin, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 pushButtonNew = digitalRead(blueButton);

  if(pushButtonNew == HIGH && pushButtonOld == LOW){

    if (ledState == HIGH)
  {
    (ledState == LOW);
  }
  else
  {
    ledState = HIGH;
  }
 }

 digitalWrite(ledPin, ledState);

 pushButtonOld = pushButtonNew;
}