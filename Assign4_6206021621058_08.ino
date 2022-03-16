#define CH1 8
#define CH3 7
#define LEDgreen 4
#define LEDred 12

void setup() {
  pinMode(CH1, OUTPUT);
  pinMode(CH3, OUTPUT);
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDred, OUTPUT);
  digitalWrite(LEDgreen,HIGH);
  digitalWrite(LEDred,HIGH);
  digitalWrite(CH1,LOW);
  digitalWrite(CH3,LOW);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(CH1,HIGH);
  delay(1000);
  digitalWrite(CH1,LOW);
  digitalWrite(CH3,HIGH);
  delay(1000);
 digitalWrite(CH3,LOW);
}
