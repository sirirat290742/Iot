#define ECHOPIN 3
#define TRIGPIN 2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  float distance = pulseIn (ECHOPIN, HIGH);
  distance = distance/50;
  Serial.print(distance);
  Serial.println(" cm");
  delay(200);
  
}
