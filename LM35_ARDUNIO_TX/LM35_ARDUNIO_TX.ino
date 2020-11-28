// the setup routine runs once when you press reset:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  // initialize serial communication at 9600 bits per second:
  lcd.begin(16,2);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() 
{  
 
  int VAL1 = analogRead(A0);
  int FSR1=VAL1/2;
  lcd.setCursor(0,0);
  lcd.print("Temperature 0C:");
  lcd.setCursor(0,1);
  lcd.print(FSR1);
  Serial.write(FSR1);
  
   delay(100);        // delay in between reads for stability
}
