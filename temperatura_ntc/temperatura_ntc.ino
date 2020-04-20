// sensor de temperatura NTC

#define Vin 4.90
#define analogNTC A0
#define T0 298.15 // [K] 25°C temperatura ambiente
#define Rt 10000 //resistencia auxiliar do divisor de tensao
#define R0 10000 //resistencia inicial do NTC a 25°C
#define T1 273.15 // [K] datasheet a 0°C
#define T2 373.15 //[K] datasheet a 100°C
#define RT1 35563 //datasheet
#define RT2 549 //datasheet

float beta = 0.0; 
float Rinf = 0.0; 
float TempKelvin = 0.0;
float TempCelsius = 0.0;
float Vout = 0.0;
float Rout = 0.0;



void setup() 
{
  Serial.begin (9600);
  beta = (log(RT1/RT2))/((1/T1) -(1/T2));
  Rinf = R0*exp(-beta/T0);
  delay(100);
}

void loop()
{
  Vout = Vin*((float) (analogRead(analogNTC))/1024.0); //leitura de A0
  Rout = (Rt*Vout/(Vin-Vout));
  TempKelvin = (beta/log(Rout/Rinf));
  TempCelsius = TempKelvin - 273.15;
  Serial.print ("Temperatura em Celsius: ");
  Serial.print (TempCelsius);
  Serial.print ("   Temperatura em Kelvin: ");
  Serial.println(TempKelvin);
  delay(500);
}
