// Lab 01 - Turn an LED on and off with a momentary button
// John Finley

#define LED 13
#define BUTTON 7

int val = 0;
int old_val = 0;
int state = 0;


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);  
}

void loop() {
  val = digitalRead(BUTTON);  //check if button is depresed
  
  if ((val == HIGH) && (old_val == LOW)) {  //if so
    state = 1 - state;
    delay(10);
  }

  old_val = val;

  if ( state == 1) {
    digitalWrite(LED, HIGH);  //light it up
  }
  else { //if not
    digitalWrite(LED, LOW);  //keep it dark
  }
}
