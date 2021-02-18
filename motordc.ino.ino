float potPin = 0;
float transistorPin = 5;
float potValue = 0;

void setup() {
  pinMode(transistorPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  analogWrite(transistorPin, potaValue);

}
