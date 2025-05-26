
const int ldrPin = A0;
const int ledPin = 9;
int threshold = 650;

void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = analogRead(ldrPin);
  Serial.println(value);
  value > threshold ? digitalWrite(ledPin, LOW) : digitalWrite(ledPin, HIGH);
  // delay(1000);
}
