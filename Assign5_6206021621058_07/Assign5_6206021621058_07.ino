//name:P07_LDR_Module
int ledPin = D2;
int ldrPin = A0;
void setup() {
  // put your setup code here, to run once:
  serial.begin(115200);
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
 
 
}

void loop() {
  // put your main code here, to run repeatedly:
 int value = analogRead(ldrPin);
 Serial.print("LDR : ");
 Serial.print(value);
 if(analogRead(ldrPin) < 400){
  digitalWrite(ledPin, HIGH);
  Serial.println(", LED On");
 }
 else{
  digitalWrite(ledPin,LOW);
  Serial.println(", LED Off");
 }
 Serial.println("");
 delay(100);
 }
