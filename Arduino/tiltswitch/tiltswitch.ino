const int tiltpin = 15;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(tiltpin, INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(tiltpin);
  if (state == LOW) {
    Serial.println("ON");
  }
  else {
    Serial.println("OFF");
  }

}
