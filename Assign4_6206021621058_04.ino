int PirSensor = 7;
int PirState;

void setup (){
  pinMode (PirSensor, INPUT);
  Serial.begin(9600);
 
}

void loop(){
PirSensor = digitalRead (PirSensor);
if (PirSensor == HIGH){
  Serial.println("Found");
 
}
else {
  Serial.println("No Found");
  }
  delay(500);
}
