#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the I2C LCD display (address 0x27, 16 columns, 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Buzzer pin
const int buzzerPin = 8;

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud

  // Initialize the LCD
  lcd.init();
  lcd.backlight();

  // Initialize the buzzer pin
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  // Print a welcome message to the LCD
  lcd.setCursor(0, 0);
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("messages...");
}

void loop() {
  // Check if there is data available on the serial port
  if (Serial.available() > 0) {
    String message = Serial.readStringUntil('\n');
    message.trim();  // Remove any leading or trailing whitespace

    // Print the received message to the serial monitor for debugging
    Serial.print("Received: ");
    Serial.println(message);

    // Display the message on the LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Message:");
    lcd.setCursor(0, 1);
    lcd.print(message);

    // Check if the received message is "Waiting"
    if (message == "Waiting") {
      // Deactivate the buzzer
      digitalWrite(buzzerPin, LOW);
    } else {
      // Activate the buzzer
      digitalWrite(buzzerPin, HIGH);
    }
  }
}
