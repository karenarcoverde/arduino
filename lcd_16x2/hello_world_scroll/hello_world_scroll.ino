//Display LCD 16X2

#include <LiquidCrystal.h>

LiquidCrystal lcd (8,9,4,5,6,7); //RS, E, D4, D5,D6,D7



void setup() 
{
  lcd.begin (16,2); // inicializa lcd 16x2
  lcd.clear ();
  lcd.setCursor (0,0);
  lcd.print ("Hello World"); 
}




void loop()
{
  
 for(int posi_LCD = 0; posi_LCD < 11 ; posi_LCD ++)
  {
    lcd.setCursor(16,1);
    lcd.scrollDisplayLeft();  //Essa é a função que faz as letras se deslocarem
 
    delay(200);         // Quanto menor o tempo, mais rápido será o deslocamento
  }
}
