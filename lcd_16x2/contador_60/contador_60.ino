//Display LCD 16X2

#include <LiquidCrystal.h>

LiquidCrystal lcd (8,9,4,5,6,7); //RS, E, D4, D5,D6,D7
int contador = 0;


void setup() 
{
  lcd.begin (16,2); // inicializa lcd 16x2
  delay(500);  
}




void loop()
{
  lcd.clear ();
  lcd.setCursor (0,0);
  lcd.print ("Exemplo LCD!");
  
  lcd.setCursor (1,1);
  lcd.print(contador);
 
  contador++;
  
  if (contador == 60)
    contador = 0;
   
  delay(1000); 
}
