// Lab 01 - Blink an LED (with a pushbutton)
// John Finley

#define LED 13
#define BUTTON 7

#include "WProgram.h"
void setup();
void loop();
int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);  
}

void loop() {
  val = digitalRead(BUTTON);  //check if switch is open
  
  if (val == HIGH) {  //if so
    digitalWrite(LED, LOW);  //keep it dark
  }
  else { //if not
    digitalWrite(LED, HIGH);  //flash the LED
    delay(150);
    digitalWrite(LED, LOW);
    delay(150);
  }
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

