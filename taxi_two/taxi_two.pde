#define RELAY_PIN_ONE 3 //double relay action
#define RELAY_PIN_TWO 4
int relayVal = 0;

int fsrVal = 0;  //force-sensitive resistor
int fsrPin = 0;

void setup()
{
  pinMode(RELAY_PIN_ONE, OUTPUT);
  pinMode(RELAY_PIN_TWO, OUTPUT);
  Serial.begin(9600); // open serial
}

void loop(){
  fsrVal = analogRead(fsrPin);  // read the input pin
    
  // if force resistor is pressed
  if(fsrVal > 10){                 //sitting
    delay(4000);
    relayVal = 1;
    Serial.println("1");
  }
  else{                           // empty
    delay(4000);
    relayVal = 0;
    Serial.println("2");
  }

  // switch the relays
  if(relayVal == 0){
    digitalWrite(RELAY_PIN_TWO, LOW);
    digitalWrite(RELAY_PIN_ONE, HIGH);
  }
  else{
    digitalWrite(RELAY_PIN_ONE, LOW);
    digitalWrite(RELAY_PIN_TWO, HIGH);
  }
}

