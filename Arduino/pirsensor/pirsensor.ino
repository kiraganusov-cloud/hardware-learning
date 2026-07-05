const int sensorpin = 16;
const int redPin = 13;
const int greenPin = 14;
const int bluePin = 15;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorpin, INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(sensorpin);
  if (state == HIGH) {
    Serial.println("MOTION DETECTED");
    color(255,0,0);
  }
  else {
    Serial.println("all clear");
    color(0,255,0);
  }
}


void color (unsigned char red, unsigned char green, unsigned char blue)
{    
  analogWrite(redPin, red);   
  analogWrite(greenPin, green); 
  analogWrite(bluePin, blue); 
}