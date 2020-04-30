// sirene com Buzzer Ativo 5v


float seno;
int frequencia;

void setup() 
{
    pinMode (9,OUTPUT);
}

void loop()
{
  for (int x = 0; x < 180; x++)
  {
    seno = (sin (x*3.1416/180)); //graus para radianos
    frequencia = 2000 + (int (seno*1000)); //frequencia fica entre 2000 Hz (frequencia mínima do som) e 3000 Hz
    tone (9,frequencia); //onda pulsante na frequencia desejada 
    delay(2);
  }
}
