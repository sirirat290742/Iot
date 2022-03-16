//name:P09_Segment
#define PIN_DP D5
#define PIN_C D3
#define PIN_D D4
#define PIN_E D6
#define PIN_B D3


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  pinMode(PIN_D, OUTPUT);
  pinMode(PIN_E, OUTPUT);
  pinMode(PIN_F, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_DP, OUTPUT);
  Serial.begin(115200);
  digitalWrite(PIN_A , LOW);
  digitalWrite(PIN_B , LOW);
  digitalWrite(PIN_C , LOW);
  digitalWrite(PIN_D , LOW);
  digitalWrite(PIN_E , LOW);
  digitalWrite(PIN_F , LOW);
  digitalWrite(PIN_G , LOW);
  digitalWrite(PIN_DP , LOW);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 
 }
