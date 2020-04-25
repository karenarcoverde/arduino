//controle remoto IR + LED RGB


#include <IRremote.h> // biblioteca do IR


float valor; // armazena o valor recebido pelo sensor
int pino_receiver = 13;  //pino D13 conectado ao receptor IR
int R = 10;
int G = 11;
int B = 9;



IRrecv irrecv (pino_receiver); //define o pino do sensor
decode_results results;


void setup() 
{
  
  pinMode (R, OUTPUT);
  pinMode (G, OUTPUT);
  pinMode (B, OUTPUT);
  irrecv.enableIRIn(); // inicializa o receptor ir
}

void loop() 
{
  if (irrecv.decode (&results)) //verifica o valor recebido
  {
    
    valor = (results.value); //recebe o codigo do botao pressionado
    //cada tecla possui um endereço diferente em Hexa

    if (valor == 0xFFA25D) //tecla 1 - acende cor vermelha
    {
      digitalWrite (R, HIGH);      
    }

    if (valor == 0xFF629D) //tecla 2 
    {
      digitalWrite (R,LOW);
    }

    if (valor == 0xFF22DD) //tecla 4 - acende cor verde
    {
      digitalWrite (G,HIGH);
    }

    if (valor == 0xFF02FD) //tecla 5
    {
      digitalWrite (G,LOW);
    }

    if (valor == 0xFFE01F) //tecla 7 - acende cor azul
    {
      digitalWrite (B,HIGH);
    }

    if (valor == 0xFFA857) //tecla 8
    {
      digitalWrite (B,LOW);
    }

    if (valor == 0xFFE21D) //tecla 3
    { 
        digitalWrite (R,HIGH);
        digitalWrite (G,LOW);
        digitalWrite (B,LOW); //vermelho
        delay(1000);

        digitalWrite (R,LOW); //verde
        digitalWrite (G,HIGH);
        digitalWrite (B,LOW);
        delay(1000);

        digitalWrite (R,LOW); //azul
        digitalWrite (G,LOW);
        digitalWrite (B,HIGH);
        delay(1000);   
    }

    
    if (valor == 0xFFC23D) //tecla 6
    {
        analogWrite(R, LOW);
        analogWrite(G, LOW);
        analogWrite(B, LOW);
    }  

    
    irrecv.resume (); //espera o proximo botao ser pressionado   
    
  }
}
