//lm35 + lcd 16x2

#include <LiquidCrystal.h>

#define sensor A0

LiquidCrystal lcd (7,6,5,4,3,2); //RS, E, D4, D5,D6,D7


float temperatura;
float soma;



void setup() 
{
  lcd.begin (16,2); // inicializa lcd 16x2
  delay(500);  
  
}

void loop()
{
  soma = 0;
  for (int indice = 0; indice < 5; indice ++)
  {
    temperatura = (analogRead (sensor)*(5.0/1023))/0.01;
    soma = soma + temperatura;
    delay(500);
  }
  
  lcd.clear ();
  lcd.setCursor(0, 0);       
  lcd.print("Temp: ");        
  lcd.print(soma/5.0, 1); //media de 5 temperaturas
  lcd.print (" ");
  lcd.print((char)223);             
  lcd.print("C");

}
