//sensor DHT11 - Umidade e Temperatura

#include <Adafruit_Sensor.h> // Biblioteca DHT Sensor Adafruit
#include <DHT.h>
#include <DHT_U.h>



#define DHTTYPE DHT11
#define DHTPIN 2

DHT_Unified dht (DHTPIN, DHTTYPE); //configura o sensor DHT - pino e tipo
uint32_t delayMS = 500; //atraso no tempo



void setup()
{
  Serial.begin (9600);
  dht.begin (); //inicializa o DHT 
  Serial.println ("Usando o Sensor DHT");
  sensor_t sensor;

}

void loop() 
{
  delay (delayMS);
  sensors_event_t event; //inicializa o evento do sensor
  dht.temperature().getEvent(&event); //leitura de temperatura
  if (isnan(event.temperature)) //verifica se tem algum erro na leitura
  {
    Serial.println ("Erro na leitura da Temperatura!");
  }
  
  else
  {
    Serial.print ("Temperatura: ");
    Serial.print (event.temperature);
    Serial.println (" *C");
  }


  dht.humidity().getEvent(&event); //leitura da umidade 
  if (isnan(event.relative_humidity))
  {
    Serial.println ("Erro na leitura da Umidade!");
  }

  else 
  {
    Serial.print ("Umidade: ");
    Serial.print (event.relative_humidity);
    Serial.println ("%");    
  }
}
