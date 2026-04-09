// Project 38 - Controlling the Motor

int buttonPin = 2;
int motorPin = 5;


void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // important for active LOW
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == 0) { // button pressed
    analogWrite(motorPin, 255); // full speed
  } else {
    analogWrite(motorPin, 0); // stop motor
  }
}




