#include <Wire.h>
#include <DS3231.h>
//#include<RTClib.h>

DS3231 ck;
RTCDateTime dt;

void setup()
{

Serial.begin(9600);
Serial.println("Intiliase RTC module");
ck.setDate(__DATE__);
ck.setTime(__Time__);
}

void loop()
{

  dt = ck.getDateTime();

  Serial.print("Raw data: ");

  Serial.print(dt.year); Serial.print("-");
  Serial.print(dt.month); Serial.print("-");
  Serial.print(dt.day); Serial.print("-");
  Serial.print(dt.hour);  Serial.print(":");
  Serial.print(dt.minute); Serial.print(":");
  Serial.print(dt.second);   Serial.print(" ");

  delay(1000);

}

