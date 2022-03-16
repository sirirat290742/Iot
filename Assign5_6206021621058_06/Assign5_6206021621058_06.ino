//name:P06_Buzzer
int buzzerPin = D1;
int btnPin = D5;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin,OUTPUT);
  pinMode(btnPin,INPUT);
  beep(100);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(btnPin) == LOW){
  beep(200);
  delay(200);
 }
void loop(){
  analogWrite(buzzerPin,20);
  delay(delayMs);
  analogWrite(buzzerPin,0);
  delay(10);
}

} 
