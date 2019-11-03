void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  
}

void loop()
{
  digitalWrite(6, LOW);
  delayMicroseconds(10);
  digitalWrite(6, HIGH);
  delayMicroseconds(10);
  digitalWrite(6, LOW);
  
  int t = pulseIn(5, HIGH);
  float d = t*0.034/2;
    
  Serial.print("Distance: ");
  Serial.println(d);
  
  if (d<80)
  { digitalWrite(8,HIGH);
  }
  else
  { digitalWrite(8,LOW);
  }
}