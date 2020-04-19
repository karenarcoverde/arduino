// sensor de luz LDR

#define analogLDR A0
#define limiar 1.5
#define ledPin 13

int leitura = 0;
float voltageLDR;


void setup()
{
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
  delay (100);
}

void loop()
{
  leitura = analogRead (analogLDR);
  voltageLDR = leitura * (5.0/1024);
  Serial.print ("Leitura sensor LDR = ");
  Serial.println (voltageLDR);

  if (voltageLDR > limiar)
    digitalWrite (ledPin, HIGH);
  else 
    digitalWrite (ledPin, LOW);

  delay (500);
}
