//#include <Tone.h>
//Tone mytone; // declare a tone name
#include "WProgram.h"
void setup();
void loop();
const int buttonPin = 7;
int buttonState = 0;

void setup() {
//  // initialize the tone
//  mytone.begin(8);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);  //check if switch is open
  
  if(buttonState == HIGH){
   Serial.println("ASCII Table ~ Character Map");
  }
//
//  while(button == HIGH){
//    // read the analog input
//    int inVar = analogRead(0);
//    // map the input to a frequency range between 200 and 2000 Hz
//    int note = map(inVar, 0, 1023, 220, 2000);
//    // play the note
//    mytone.play(note);
//  }
}


int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

