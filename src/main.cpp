#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD with I2C address 0x27 and size 16x2
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    lcd.init(); // Initialize the LCD
    lcd.backlight(); // Turn on the backlight
}

void loop() {
    uint64_t endTime = esp_timer_get_time() + 1000000; // Set end time as 1 second later
    while (esp_timer_get_time() < endTime) {
        lcd.clear(); // Clear the display
        lcd.setCursor(0, 0); // Set cursor to top-left position
        lcd.print("Hello, World!"); // Print the message
        delay(1000); // Delay for 1 second
    }
}