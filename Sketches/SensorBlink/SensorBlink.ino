const int inputPin = 14; 
int state = LOW;
int value = 0;

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value = digitalRead(inputPin);
  if (value == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Motion Detected");
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("No motion");
  }
  delay(500);
}
