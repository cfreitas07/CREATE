#include <Servo.h>  // Include the Servo library to control the servo motor

// Create a servo object to control a servo
Servo myServo;  

// Constant for the potentiometer pin
const int potPin = A1;  // Potentiometer connected to analog pin A1

// Variable to store the potentiometer value
int potValue = 0;  

// Variable to store the servo position
int servoPos = 0;  

void setup() {
  // Attach the servo on digital pin D10 to the servo object
  myServo.attach(10);
  
  // Initialize the potentiometer pin as an input
  pinMode(potPin, INPUT);
}

void loop() {
  // Read the value from the potentiometer
  potValue = analogRead(potPin);  
  // Map the potentiometer value from (0-1023) to (0-180) degrees for the servo
  servoPos = map(potValue, 0, 1023, 0, 180);  
  
  // Set the servo position based on the mapped value
  myServo.write(servoPos);  
  
  // A short delay to allow the servo to physically move to the position
  delay(15);  
}
