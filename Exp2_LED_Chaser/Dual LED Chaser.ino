void setup()
{
  for(int i=6;i<10;i++)
  {
   pinMode(i,OUTPUT);
  }
}

void loop()
{
  for(int i=6;i<10;i++)
  {allLEDsOff();
   if(i!=9)
   {digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
   }
   else
   digitalWrite(i,HIGH);
   digitalWrite(i-3,HIGH);
   delay(500);
   allLEDsOff();
  }
}

void allLEDsOff(void)
{for(int i=6;i<10;i++)
 {digitalWrite(i,LOW);
 }
 delay(200);
}