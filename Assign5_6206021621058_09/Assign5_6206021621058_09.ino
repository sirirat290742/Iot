//name:P09_Lcd
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.display();
  lcd.backlight();
  lcd.clear();
  lcd.cursor();
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Hello world!");
  delay(500);
  lcd.setCursor(2,1);
  lcd.print("IT - Fitm!!");
  delay(5000);
  lcd.clear();
  lcd.print("Show Use LCD I2C");
  lcd.setCursor(16,1);
  lcd.print("With NodeMCU-12E");
  delay(3000);
  lcd.setCursor(0,1);
  char s[16] = "060243116 IoT 64";
  for(int n= 0; n < strlen(s);n++){
    lcd.print(s[n]);
    delay(500);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
 
 }
