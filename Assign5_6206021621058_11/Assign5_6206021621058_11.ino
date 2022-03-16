//name:P11_Ultrasonic
#include <NewPing.h>
#include <LiquidCrystal_I2C.h>


#define TRIGGER_PIN D6
#define ECHO_PIN D5
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
LiquidCrystal_I2C lcd(0x3F,16,2);
void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 pinMode( TRIGGER_PIN, OUTPUT);
 pinMode (ECHO_PIN,INPUT);
 lcd.begin();
 lcd.display();
 lcd.backlight();
 lcd.clear();
  
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(100);
 float dist = sonar.ping_cm();
 Serial.print("Distance: ");
 Serial.print(dist);
 Serial.println(" cm");
 lcd.setCursor(0,0);
 lcd.print("Distance : ");
 lcd.print(dist);
 lcd.print("cm");
 
 }
