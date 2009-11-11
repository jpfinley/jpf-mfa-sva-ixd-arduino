// Lab 01 - Blink an LED (with a pushbutton)
// John Finley

#define LED 13
#define BUTTON 7

int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);  
}

void loop() {
  val = digitalRead(BUTTON);  //check if switch is open

  while (val == LOW) {  //while the switch is open
    digitalWrite(LED, HIGH);  //light it up
  }
}

