//john finley
//jpfinley@gmail.com

#include <Tone.h>
#include "WProgram.h"
void setup();
void loop();
Tone mytone; // get me mah tonez

//buttons
const int buttonPin = 2;
int buttonState = 0;

//initialize tones
int songTones[8] = { NOTE_B4, NOTE_A4, NOTE_C4, NOTE_B4, 1275, 1136, 1014, 956 };
int i; //incrementer

void setup(){
  pinMode(buttonPin, INPUT);
  mytone.begin(8); //output sound on pin 8
}

void loop(){
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW){
    for(i = 0; i < 7; i = i + 1){
      mytone.play(songTones[i], 1000);
      delay(1000);
    }
  }
  else { //HERE I GO AGAIN RECORD MODE
    mytone.stop(); //silence
    for(i = 0; i < 7; i = i + 1){
      int inVar = analogRead(0); //read the varible resistor for a value
      // map the input to a frequency range between 200 and 2000 Hz
      int note = map(inVar, 0, 1023, 220, 2000);
      songTones[i] = note; //set value
      mytone.play(note, 1000);//play value, duration small
//      mytone.stop(); //silence
      delay(1000);
    }
    //end tone?
  }//end if/else
}//endloop

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

