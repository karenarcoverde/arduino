// ponte H com módulo 2 relés


int IN1 = 4;
int IN2 = 5;



void setup() 
{
  Serial.begin (9600);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  digitalWrite (IN1, HIGH); //desativa relé K1
  digitalWrite (IN2, HIGH); //desativa relé K2
}

void loop()
{
  digitalWrite (IN2, HIGH); //desativa relé K2
  digitalWrite (IN1, LOW); //aciona relé K1
  Serial.println ("Relé K1 acionado");
  delay (3000);
  digitalWrite (IN1, HIGH); //desativa relé K1 
  digitalWrite (IN2, LOW); //aciona relé K2
  Serial.println ("Relé K2 acionado");
  delay (3000);

}
