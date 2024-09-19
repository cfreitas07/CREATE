// Constants for the LED pins
const int ledPin1 = 4;  // LED connected to digital pin 4
const int ledPin2 = 8;  // LED connected to digital pin 8
const int ledPin3 = 13;  // LED connected to digital pin 3
const int buttonLedPin = 9; // LED to activate when button is pressed

// Constant for the button pin
const int buttonPin = 2;  // Button connected to digital pin 2

// Variable to track the button state
int buttonState = 0;  

void setup() {
  // Set up the LED pins as outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buttonLedPin, OUTPUT);
  
  // Set up the button pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Blink the LEDs
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  delay(500);  // Wait for 500 milliseconds
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  delay(500);  // Wait for 500 milliseconds
  
  // Check the button state
  buttonState = digitalRead(buttonPin);
  
  // If the button is pressed, turn on the button LED for 1 second
  if (buttonState == HIGH) {
    digitalWrite(buttonLedPin, HIGH);
    delay(1000);  // Keep the LED on for 1 second
    digitalWrite(buttonLedPin, LOW);
  }
}
