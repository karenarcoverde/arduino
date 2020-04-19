// push-botton + led

#define PinButton 8
#define ledPin 7

void setup() 
{
  pinMode (PinButton, INPUT);
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
  delay (100);
}

void loop()
{
  if (digitalRead (PinButton) == HIGH)
  {
    digitalWrite (ledPin, HIGH);
    Serial.print ("Acendendo led");
  }

  else 
  {
    digitalWrite (ledPin, LOW);
    Serial.print ("Desligando led");
  }
  
  delay (100);
  
}
