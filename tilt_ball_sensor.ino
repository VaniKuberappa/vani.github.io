/*********************************
 * name:buzzer
 * function: you should hear the buzzer make sounds.
 *************************************/
//Email: info@primerobotics.in
//Website: www.primerobotics.in
/************************************/


const int ledPin = 13;
int sensorPin = 2;
//int sensorValue;
//int lastTiltState = HIGH; // the previous reading from the tilt sensor

// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
//long lastDebounceTime = 0; // the last time the output pin was toggled
//long debounceDelay = 50; // the debounce time; increase if the output flickers

void setup(){
//pinMode(sensorPin, INPUT);
//digitalWrite(sensorPin, HIGH);
pinMode(ledPin, OUTPUT);
pinMode (2,INPUT);
//Serial.begin(9600);
digitalWrite(2, HIGH);
}

void loop(){
int digitalVal= digitalRead(2);//read pin 2
if(HIGH== digitalVal)
{
  digitalWrite(ledPin, LOW);
}
else 
{
  digitalWrite(ledPin, HIGH);
}
}


