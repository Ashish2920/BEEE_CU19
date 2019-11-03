void setup()
{ Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(2, INPUT);
  digitalWrite(7, LOW);
}

void loop()
{
  int r = digitalRead(2);
  Serial.print("Switchstate = ");
  Serial.println(r);
  
  if ( r!= LOW)
  {
    digitalWrite(7, HIGH);
    
  }
  else
  {
    digitalWrite(7, LOW);
    
  }
}