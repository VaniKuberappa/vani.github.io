#include <LedControl.h>

const int DIN = 12;
const int CS = 11;
const int CLK= 10;



LedControl lc=LedControl(DIN, CLK, CS,0);



void setup()   {

  lc.shutdown(0,false);
  lc.setIntensity(0,0);
  lc.clearDisplay(0);
}

void   loop() {
  for(int j=0;j<8;j++){
     for(int i=0;i<8;i++){
       lc.setLed(0,j,i,true);
        delay(100);
       lc.setLed(0,j,i,false);
     }
  }
}