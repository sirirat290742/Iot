//name:P10_DHT11
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN D4
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("DHT11 test!");
  dht.begin();
  lcd.begin();
  lcd.display();
  lcd.backlight();
  lcd.clear();
  
}

void loop() {
  // put your main code here, to run repeatedly:
 char temp[10];
 delay(1000);
 if(dht.read()){
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("% Temperature: ");
  Serial.print(t);
  Serial.print("C"); 
  lcd.setCursor(0,0);
  lcd.print("Humi: ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor("0,1");
  lcd.print("Temp: " );
  lcd.print(t);
  lcd.print("C");
 }
 else{
  Serial.println(F("Failed toread from Dht sensor!"));
  return;
 }
 }
