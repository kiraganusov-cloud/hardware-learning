const int redPin = 15;   
const int greenPin = 13;  
const int bluePin = 12;  

const int buttonPin = 14;
int buttonState = 0;

void setup() {
  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT); 
  pinMode(bluePin, OUTPUT); 

  pinMode(buttonPin, INPUT);
  Serial.begin(115200);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    color(255,0,0)
  }
  else {
    color(0,255,0);
  }
}

void color (unsigned char red, unsigned char green, unsigned char blue)
{    
  analogWrite(redPin, red);   
  analogWrite(greenPin, green); 
  analogWrite(bluePin, blue); 
}