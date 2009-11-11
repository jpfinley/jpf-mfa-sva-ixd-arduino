// Lab 01 - Blink an LED
// John Finley

#define LED 13

#include "WProgram.h"
void setup();
void loop();
void setup() {
  pinMode (LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

