#include <Wire.h>            // Include the Wire library for I2C communication
#include <LiquidCrystal_I2C.h> // Include the library for the I2C LCD

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Constant for the light sensor pin
const int lightSensorPin = A0;  // Light sensor connected to analog pin A0

void setup() {
  // Initialize the LCD connected to the I2C
  lcd.init();
  // Turn on the backlight on LCD.
  lcd.backlight();
  // Initialize the light sensor pin as an input
  pinMode(lightSensorPin, INPUT);
}

void loop() {
  // Read the light level from the light sensor
  int lightLevel = analogRead(lightSensorPin);
  
  // Clear the LCD before displaying new data
  lcd.clear();
  
  // Set the cursor to column 0, row 0
  lcd.setCursor(0, 0);  
  // Print a static message
  lcd.print("Light Level:");
  
  // Set the cursor to column 0, row 1
  lcd.setCursor(0, 1);
  // Print the light sensor reading
  lcd.print(lightLevel);
  
  // Wait a bit before the next reading
  delay(1000);
}
