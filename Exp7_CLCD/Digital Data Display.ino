#include<LiquidCrystal.h>
LiquidCrystal lcd(6,7,10,11,12,13);

void setup()
{
 lcd.begin(16,2);
 lcd.print("Hello World");
 Serial.begin(9600);
}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  
  if(Serial.available())
  { 
    delay(100);
    lcd.clear();
   lcd.setCursor(3,0);
   while(Serial.available() >0)
  { 
    lcd.write(Serial.read());
  }
  }
}