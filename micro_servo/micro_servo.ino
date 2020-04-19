// micro servo TowerPro

#include <Servo.h>

#define pinServo 6
#define pinPotenciometro A0

Servo myservo;

int lido;
byte angulo;


void setup() 
{
  myservo.attach (pinServo);
  Serial.begin (9600);
}

void loop()
{
  lido = analogRead (pinPotenciometro);
  angulo = map (lido, 0, 1023, 0, 179);

  myservo.write (angulo);
  
  Serial.print ("A0: ");
  Serial.print (lido);
  Serial.print ("   angulo: ");
  Serial.println (angulo);
  
  
}
