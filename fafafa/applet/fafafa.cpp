
 #include "WProgram.h"
void setup();
void loop();
void setup() 
 { 
   Serial.begin(9600); 
   // prints title with ending line break 
   Serial.println("ASCII Table ~ Character Map"); 
 }

void loop() {
   Serial.println("ASCII Table ~ Character Map"); 
}

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

