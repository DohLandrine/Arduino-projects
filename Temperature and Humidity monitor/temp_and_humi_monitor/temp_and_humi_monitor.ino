#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

// Setting up the LCD (I2C address: 0x27)
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temp = dht.readTemperature();

   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Temp: ");
   lcd.print(temp);
   lcd.print(" C");

   lcd.setCursor(0, 1);
   lcd.print("Humidity: ");
   lcd.print(humidity);
   lcd.print(" %");

   delay(2000); // it Updates every 2 seconds
}
