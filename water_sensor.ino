


int adc_id = 0;
int histroyvalue = 0;
char printbuffer[128];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(adc_id);

  if(((histroyvalue >= value)&& ((histroyvalue - value > 10)) || ((histroyvalue<value) && ((value -histroyvalue) >1))))
  {
    sprintf(printbuffer, "adc  %d level is %d \n",adc_id, value);
    Serial.print(printbuffer);
    histroyvalue = value;
  }

}