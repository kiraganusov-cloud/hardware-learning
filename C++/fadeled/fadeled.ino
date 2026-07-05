const int ledPin = 15;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int value = 0; value <= 255; value += 5) {
    analogWrite(ledPin, value);
    delay(50);
  }

}
