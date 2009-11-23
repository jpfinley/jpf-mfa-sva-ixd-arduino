#define BUTTON 7

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
}

void loop() {
  if(digitalRead(BUTTON) == HIGH){
    Serial.print(0);
  }
  else{
    Serial.print(1);
  }
}

