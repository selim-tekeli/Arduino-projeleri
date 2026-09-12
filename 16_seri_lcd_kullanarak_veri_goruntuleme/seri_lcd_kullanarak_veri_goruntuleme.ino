#include <Wire.h>
#include <LiquidCrystal_I2C.h>



LiquidCrystal_I2C lcd(0x27, 16, 2);

int n = 1; 

void setup() {
  lcd.init();          
  lcd.backlight();     
  
  lcd.setCursor(0, 0); 
  lcd.print("MERHABA ARDUINO TEST");
  
  lcd.setCursor(0, 1); 
  lcd.print("SAYAC: ");
}

void loop() {
  lcd.setCursor(7, 1); 
  lcd.print(n);
  
  
  if (n < 10) lcd.print("   "); 
  else if (n < 100) lcd.print("  ");

  n = n + 1;
  delay(1000); 
}
