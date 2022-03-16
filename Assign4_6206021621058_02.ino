int bluePin = 9;
int greenPin = 10;
int redPin = 11;
int blueBrightness = 0;
int greenBrightness = 0;
int redBrighness = 0;

void setup (){
  Serial.begin(9600);
  pinMode (bluePin, OUTPUT);
  pinMode (greenPin, OUTPUT);
  pinMode (redPin, OUTPUT);
}

void loop(){
  digitalWrite(bluePin, HIGH);
  delay(200);
  digitalWrite(bluePin, LOW);
  delay(200);
  digitalWrite(greenPin, HIGH);
  delay(200);
  digitalWrite(greenPin, LOW);
  delay(200);
  digitalWrite(redPin, HIGH);
  delay(200);
  digitalWrite(redPin, LOW);
  delay(200);
}
