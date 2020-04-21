//sensor de distância ultrassônico HC-SR04

int pinTrigger = 2; //dispara pulsos do sensor
int pinEcho = 3; //ler saida do sensor
float TempoEcho = 0;
const float velocidadeSom_mps = 340; //velocidade do som em m/s
const float velocidadeSom_mpus = 0.000340;



void setup() 
{
  pinMode (pinTrigger, OUTPUT); //pino trigger como saída
  digitalWrite (pinTrigger, LOW);
  
  pinMode (pinEcho, INPUT); //pino echo como entrada
  
  Serial.begin (9600);
  delay(100);
}

void loop() 
{
  DisparaPulsoUltrassonico ();
  TempoEcho = pulseIn(pinEcho, HIGH); //duração do pulso HIGH de eco em micro seg
  
  Serial.print ("Distancia em metros: ");
  Serial.println (CalculaDistancia(TempoEcho));

  Serial.print ("Distancia em centimetros: ");
  Serial.println (CalculaDistancia(TempoEcho)*100);

  delay(2000);
}


void DisparaPulsoUltrassonico ()
{
  digitalWrite (pinTrigger, HIGH);
  delayMicroseconds (10);
  digitalWrite (pinTrigger, LOW);
}


float CalculaDistancia (float tempo_us) 
{
  return ((tempo_us*velocidadeSom_mpus)/2); // retorna uma distancia em metros 
}


  
