#define pino A0


int temperatura = 0;
int ultima_temperatura = 0;
int media[10];

void setup() 
{
 Serial.begin (9600);
}

void loop() 
{
 /*
  * 0V = 0, 5V = 1023, Cada G.C. : 10mV/°C
  */
  for (int indice = 0; indice < 10; indice++)
  {
    media[indice] = (analogRead (pino)*(5.0/1023))/0.01; 
    temperatura = temperatura + media[indice];
    delay(100);
  }
  
  temperatura = temperatura/10.0;

 if(temperatura != ultima_temperatura)
 {
  ultima_temperatura = temperatura;
  Serial.print ("Temperatura: ");
  Serial.print (temperatura);
  Serial.println ("°C");
 }
 delay(1000);
}
