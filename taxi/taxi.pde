//John Finley
//Beatriz
//Chai-Wei
//Clint Beharry

#include <Servo.h>

Servo myServo; // create servo object to control a servo

int fsrOnePin = 0; //force-sensitive resistor one
int fsrTwoPin = 1; //force-sensitive resistor two
int fsrOneVal = 0; //value for fsrOne
int fsrTwoVal = 0; //value for fsrTwo

int redLED = 2;
int greenLED = 3;

int busy = 0;
int vacant = 90;

void setup(){
  pinMode(greenLED, OUTPUT);   // sets GREEN pin as output
  pinMode(redLED, OUTPUT);   // sets RED pin as output
  myServo.attach(9); // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop(){
  fsrOneVal = analogRead(fsrOnePin);    // read the input pin
  fsrTwoVal = analogRead(fsrTwoPin);    // read the input pin
  Serial.println(fsrTwoVal, DEC);

  delay(1000);

  if(fsrOneVal > 10 && fsrTwoVal > 10){
    Serial.println("in the cab");       //getting into the cab
    digitalWrite(greenLED, LOW);        //turn off Green
    digitalWrite(redLED, HIGH);         //turn on Red
    myServo.write(busy);                //flip sign to "Busy"
    delay(4000);
  }
  else{
    Serial.println("out of the cab");  //getting out of the cab
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    myServo.write(vacant);                //flip sign to "Vacant"
  } //end if-else
}  //end loop
