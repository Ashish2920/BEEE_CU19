void setup()
{ 
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop()
{
  int d= analogRead(A0);
  Serial.println(d);
  delay(100);
  if (d>350)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
  }
}