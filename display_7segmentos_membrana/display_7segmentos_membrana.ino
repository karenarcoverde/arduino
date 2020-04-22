//display 7 segmentos + teclado de membrana

#include <Key.h>
#include <Keypad.h> // biblioteca keypad 
#include <SindormirSevenSegments.h> // biblioteca para o display de 7 segmentos


SindormirSevenSegments my7S;

const byte linhas = 4; // keypad 4 linhas
const byte colunas = 4; // keypad 4 colunas

char hexaKeys [linhas][colunas] =
{
  {'1', '2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'F','0','E','D'}  // * = F e # = E
};

byte linhasPins [linhas] = {11,10,9,8}; //portas D11 A D8 correspondente as linhas do keypad
byte colunasPins [colunas] = {7,6,5,4}; //portas D7 A D4 correspondente as colunas do keypad

Keypad customKeypad = Keypad(makeKeymap(hexaKeys),linhasPins, colunasPins, linhas, colunas); //inicializa o keypad

void setup() 
{
  Serial.begin (9600);
  pinMode (A0, OUTPUT);
  pinMode (A1, OUTPUT);
  pinMode (A2, OUTPUT);
  pinMode (A3, OUTPUT);
  pinMode (A4, OUTPUT);
  pinMode (A5, OUTPUT);

  my7S.commonType(CATODO);
  my7S.attach(A5,A4,A2,A1,A0,12,13,A3);  // A0 = E, A1 = D, A2 = C, A3 = D, A4 = B, A5 = A, D12 = F, D13 = G, DP = A3 no display de 7 segmentos
}

void loop()
{
  char customKey = customKeypad.getKey(); //leitura da tecla pressionada

  int number = customKey - 48; // converte o caractere para um número (tabella ascii)

  if ((number > 16) && (number < 23)) //se o numero for entre 17 e 22, subtraia 7 (numeros hexadecimais)- tabela ascii
    number = number - 7; 


  if (customKey)
  {
    my7S.print(number); //mostra o caractere no display

    Serial.println (number); // imprime o numero no monitor serial 
  }
}
