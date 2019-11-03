char data=0;
void setup()
{ Serial.begin(9600);
  pinMode(10,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {data = Serial.read();
   Serial.print(data);
   
   if(data==1)
     digitalWrite(10,HIGH);
   else
   {if (data==0)
     digitalWrite(10,LOW);
  }
  }
}