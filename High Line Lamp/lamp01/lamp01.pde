#define LED 13

void setup() {
  pinMode (LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(700);
  digitalWrite(LED, LOW);
  delay(170);
  
  digitalWrite(LED, HIGH);
  delay(125);
  digitalWrite(LED, LOW);
  delay(40);
  
  digitalWrite(LED, HIGH);
  delay(165);
  digitalWrite(LED, LOW);
  delay(300);
  
  digitalWrite(LED, HIGH);
  delay(165);
  digitalWrite(LED, LOW);
  delay(60);
  
//  digitalWrite(LED, HIGH);
//  delay(210);
//  digitalWrite(LED, LOW);
//  delay(30);
  
  digitalWrite(LED, HIGH);
  delay(5000);
  digitalWrite(LED, LOW);
  delay(100);
  
  
  delay(3000);
}
