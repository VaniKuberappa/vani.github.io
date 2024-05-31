/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board

// constants won't change. They're used here to set pin numbers:
const int BUTTON_PIN = 7;  // the number of the pushbutton pin
const int LED_PIN =  8;   // the number of the LED pin
unsigned long lastTimeButtonStateChanged=millis();
unsigned long debounceDuration=50;//millis

// variables will change:
int lastButtonState,ledState = 0;   // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
    pinMode(LED_PIN, OUTPUT);
    // initialize the pushbutton pin as an pull-up input:
    // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
    pinMode(BUTTON_PIN, INPUT);
    lastButtonState = digitalRead(BUTTON_PIN);
  }

void loop() {
  // read the state of the pushbutton value:
  //buttonState = digitalRead(BUTTON_PIN);
  if (millis()-lastTimeButtonStateChanged>=debounceDuration){
     byte buttonState =digitalRead(BUTTON_PIN);
      if (buttonState != lastButtonState){
      lastTimeButtonStateChanged  = millis();
      lastButtonState=buttonState;
      if (buttonState ==LOW){
         if (ledState==HIGH)
      {
        ledState=LOW;
      }  
      else {
        ledState=HIGH;
      }
      digitalWrite(LED_PIN, ledState);
      }
}     
    }
  // control LED according to the state of button
  //if(digitalRead(BUTTON_PIN) == HIGH){
     //  digitalWrite(LED_PIN, HIGH); // turn on LED
  }         // If button is pressing
    
  //else                           // otherwise, button is not pressing
   // digitalWrite(LED_PIN, LOW);  // turn off LED







