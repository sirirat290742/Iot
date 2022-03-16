//name:P05_Button
int btnPin = D5;
int ledPin = D2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(btnPin , INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(btnPin);
  Serial.print("Button : ");
  Serial.println(value);
  if(value == LOW) digitalWrite(ledPin, HIGH);
  else digitalWrite(ledPin, LOW);

}
