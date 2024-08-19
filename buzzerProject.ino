int vrxPin = A4;
int vryPin = A5;
int sw = 3;

int buzzPin = 5;

void setup() {
  // put your setup code here, to run once:
 pinMode(vrxPin, INPUT);
 pinMode(vryPin, INPUT);
 pinMode(sw, INPUT_PULLUP);

 pinMode(buzzPin, OUTPUT);

 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int vrxVal = analogRead(vrxPin);
 int vryVal = analogRead(vryPin);
 int swVal = digitalRead(sw);
 Serial.println(swVal);

 digitalWrite(buzzPin, HIGH);
 delay(500);
 digitalWrite(buzzPin, LOW);
 delay(500);
}
