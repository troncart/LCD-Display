/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********16x2 LCD Display**************
*/
 
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("TRONCART");
  delay(2000);
}

void loop() 
{
  lcd.setCursor(0, 0);
  lcd.print("www.troncart.com");
  lcd.setCursor(0, 1);
  lcd.print("www.tachlog.com");
  for (int i = 0 ; i < 16; i ++) 
   {
      lcd.scrollDisplayLeft(); 
      delay(175);
   }
//    lcd.clear();
}
