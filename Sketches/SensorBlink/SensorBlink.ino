const int inputPin = 14; 
int value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  value = digitalRead(inputPin);
  digitalWrite(LED_BUILTIN, value);
  if (value == HIGH) {
    Serial.println("Motion Detected");
  } 
  delay(100);
}