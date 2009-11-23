#define BUTTON 7

#include "WProgram.h"
void setup();
void loop();
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


int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

