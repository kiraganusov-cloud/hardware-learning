const int switchpin = 15;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchpin, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(switchpin);
  if (state == LOW) {
    Serial.println("OFF");
  }
  else {
    Serial.println("ON");
  }
}
