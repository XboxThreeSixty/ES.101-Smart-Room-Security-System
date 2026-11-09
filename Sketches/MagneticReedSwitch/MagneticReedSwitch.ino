const int inputPin = 14;
int value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT_PULLUP);
}

void loop() {
  value = digitalRead(inputPin);
  if(value == LOW) {
    Serial.println("Movement Detected");
  }
  delay(250);
}
