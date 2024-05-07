// Pin number for the LED
const int ledPin = 13;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
//int ledpin=11;// initialize pin 11
int inpin=7;// initialize pin 7
int val;// define val


void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
  lcd.init(); // initialize the lcd

//Read signal from inpin = 7
digitalRead(inpin);
// Print a message to the LCD.
lcd.backlight();

}

void loop() {
  // Turn on the LED
  digitalWrite(ledPin, HIGH);
  lcd.setCursor(0,0);
lcd.print("LED High");
lcd.setCursor(0,1);
//lcd.print(val);
  // Wait for 1 second
  delay(1000);
  
  // Turn off the LED
  digitalWrite(ledPin, LOW);
   lcd.setCursor(0,0);
lcd.print("LED Low ");
lcd.setCursor(0,1);
//lcd.print(val);
  // Wait for 1 second
  delay(1000);
}