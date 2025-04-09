#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // If this doesn't work, try 0x3F

#define moisturePin A0
#define relayPin 8

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Motor OFF

  lcd.begin();        // Use this instead of lcd.init()
  lcd.backlight();    // Turn on backlight
  lcd.setCursor(0, 0);
  lcd.print("Smart Sinchan");
  delay(2000);
  lcd.clear();
}

void loop() {
  int moistureValue = analogRead(moisturePin);
  
  // Maharashtra: Dry = 900, Wet = 400
  int percentage = map(moistureValue, 900, 400, 0, 100);
  percentage = constrain(percentage, 0, 100);

  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.print(percentage);
  lcd.print("%   ");

  if (percentage < 60) {
    digitalWrite(relayPin, LOW); // Motor ON
    lcd.setCursor(0, 1);
    lcd.print("Pani Suru Ahe");
  } else {
    digitalWrite(relayPin, HIGH); // Motor OFF
    lcd.setCursor(0, 1);
    lcd.print("Pani Band Ahe");
  }

  delay(1000);
}
