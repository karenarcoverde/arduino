//módulo RTC DS1307


#include "RTClib.h"

RTC_DS1307 rtc;

char diasDaSemana [7][12] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};

void setup() 
{
  Serial.begin (9600);
  if (!rtc.begin()) //se o RTC nao for inicializado
  {
    Serial.println ("RTC nao pode ser encontrado!");
    while (1);
  }

  if (!rtc.isrunning()) // se o RTC nao estiver rodando
  {
    Serial.println ("RTC nao esta funcionando!");    
  }

  rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); //ajusta relogio com o relogio do PC
}

void loop() 
{
  DateTime now = rtc.now(); //faz a leitura dos dados do RTC
  Serial.print (now.day(),DEC); //dia
  Serial.print ('/');
  Serial.print (now.month(),DEC); //mes
  Serial.print ('/');
  Serial.print (now.year(),DEC); //ano
  Serial.print (" (");
  Serial.print (diasDaSemana [now.dayOfTheWeek()]); //dia da semana
  Serial.print (")");
  Serial.print (now.hour(),DEC); //horas
  Serial.print (":");
  Serial.print (now.minute(),DEC); //minutos
  Serial.print (":");
  Serial.print (now.second(),DEC); //segundos
  Serial.println ();
  delay(2000);
}
