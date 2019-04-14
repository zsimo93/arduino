#include <math.h>
#include <LiquidCrystal.h>
#include "DHT.h"

int sensorPin = 8; // select the input pin for the potentiometer
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

DHT dht;
 
void setup() {
  // set up the LCD's number of columns and rows:
  dht.setup(sensorPin);
  lcd.begin(16, 2);
  lcd.print("Temp:");
  lcd.setCursor(0,1);
  lcd.print("Hum:");
  Serial.begin(9600);
}
 
void loop() {
  int t = dht.getTemperature();
  int h = dht.getHumidity();
  lcd.setCursor(6, 0);
  lcd.print(t);
  lcd.setCursor(6, 1);
  lcd.print(h);
  
  Serial.println(t);  // display tempature
  Serial.println(h);
  delay(2000);
}
