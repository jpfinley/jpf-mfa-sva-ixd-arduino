#include <Tone.h>
Tone mytone; // declare a tone name

void setup() {
  // initialize the tone
  mytone.begin(8);
}

void loop() {
  // read the analog input
  int inVar = analogRead(0);
  // map the input to a frequency range between 200 and 2000 Hz
  int note = map(inVar, 0, 1023, 220, 2000);
  // play the note
  mytone.play(note);
}
