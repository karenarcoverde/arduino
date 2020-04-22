//controle remoto IR - leds coloridos


#include <IRremote.h> // biblioteca do IR


float valor; // armazena o valor recebido pelo sensor
int pino_receiver = 13;  //pino D13 conectado ao receptor IR
int ledvermelho = 7;
int ledverde = 6;
int ledamarelo = 5;

IRrecv irrecv (pino_receiver); //define o pino do sensor
decode_results results;


void setup() 
{
  
  pinMode (ledvermelho, OUTPUT);
  pinMode (ledverde, OUTPUT);
  pinMode (ledamarelo, OUTPUT);
  irrecv.enableIRIn(); // inicializa o receptor ir
}

void loop() 
{
  if (irrecv.decode (&results)) //verifica o valor recebido
  {
    
    valor = (results.value); //recebe o codigo do botao pressionado
    //cada tecla possui um endereço diferente em Hexa

    if (valor == 0xFFA25D) //tecla 1
    {
      digitalWrite (ledvermelho, HIGH);      
    }

    if (valor == 0xFF629D) //tecla 2 
    {
      digitalWrite (ledvermelho,LOW);
    }

    if (valor == 0xFF22DD) //tecla 4
    {
      digitalWrite (ledverde,HIGH);
    }

    if (valor == 0xFF02FD) //tecla 5
    {
      digitalWrite (ledverde,LOW);
    }

    if (valor == 0xFFE01F) //tecla 7
    {
      digitalWrite (ledamarelo,HIGH);
    }

     if (valor == 0xFFA857) //tecla 8
    {
      digitalWrite (ledamarelo,LOW);
    }

     if (valor == 0xFFE21D) //tecla 3
    {
      digitalWrite (ledvermelho,LOW);
      digitalWrite (ledverde,LOW);
      digitalWrite (ledamarelo,LOW);
    }
    irrecv.resume (); //espera o proximo botao ser pressionado   
  }
}
