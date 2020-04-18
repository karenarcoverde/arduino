//divisor de tensao

#define sensorPin0 A0
#define sensorPin1 A1

int sensorValue0 = 0;
int sensorValue1 = 0;
float voltage0;
float voltage1;

void setup()
{
  Serial.begin (9600);
  delay (100); 
}

void loop()
{
  sensorValue0 = analogRead (sensorPin0);
  sensorValue1 = analogRead (sensorPin1);
  voltage0 = sensorValue0 * (5.0/1024);
  voltage1 = sensorValue1 * (5.0/1024);
  Serial.print ("Tensao do divisor 0: ");
  Serial.print (voltage0);
  Serial.print ("   Tensao do divisor 1: ");
  Serial.println (voltage1);
  delay (500); 
}
