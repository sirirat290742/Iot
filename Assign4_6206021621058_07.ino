void setup() {
  pinMode(9, OUTPUT);

}

void loop() {
 beep(200);

}

void beep (unsigned char delayms){
  analogWrite(9, 20);
  delay(delayms);
  analogWrite(9,0);
  delay(delayms);
}
