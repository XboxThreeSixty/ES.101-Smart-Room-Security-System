int reedPin = 14;
int motionPin = 13;
int reedVal = 0;
int motionVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(reedPin, INPUT_PULLUP);
  pinMode(motionPin, INPUT);
}

void loop() {
  reedVal = digitalRead(reedPin);
  motionVal = digitalRead(motionPin);

  if(reedVal == HIGH) {
    Serial.println("Reed Switch detects movement");
  }

  if(motionVal == HIGH) {
    Serial.println("PIR Sensor detects movement");
  }
  delay(250);
}
