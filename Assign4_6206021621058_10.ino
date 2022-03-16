#include <Wire.h>
#include <LiquidCrystal_I2c.h>
LiquidCrystal_I2c lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.print(" Hello, world!");
  lcd.setCursor(0,1);
  lcd.print("Arduino Learning");
  lcd.setCursor(0,2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
