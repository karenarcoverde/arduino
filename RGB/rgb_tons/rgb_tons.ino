//RGB - tons de cores


const int R = 10;
const int G = 11;
const int B = 9;

int ValorRed = 255;
int ValorGreen = 0;
int ValorBlue = 0;

void setup()
{
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    analogWrite(R, ValorRed);
    analogWrite(G, ValorGreen);
    analogWrite(B, ValorBlue);
}

void loop()


{
   for (ValorGreen = 0; ValorGreen < 255; ValorGreen=ValorGreen+5) //amarelo = verde maximo + vermelho maximo
   {
        analogWrite(G, ValorGreen);
        delay(50);
    }
    for (ValorRed = 255; ValorRed > 0; ValorRed=ValorRed-5) // verde maximo = vermelho minimo + verde maximo
    {
        analogWrite(R, ValorRed);
        delay(50);
    }
    for (ValorBlue = 0; ValorBlue < 255; ValorBlue=ValorBlue+5) // azul bem claro = verde maximo + azul maximo
    {
        analogWrite(B, ValorBlue);
        delay(50);
    }

    for (ValorGreen = 255; ValorGreen > 0; ValorGreen=ValorGreen-5) // azul maximo = verde minimo + azul maximo
    {
        analogWrite(G, ValorGreen);
        delay(50);
    }
    for (ValorRed = 0; ValorRed < 255; ValorRed=ValorRed+5) // violeta = azul maximo + vermelho maximo
    {
        analogWrite(R, ValorRed);
        delay(50);
    }
    for (ValorBlue = 255; ValorBlue > 0; ValorBlue=ValorBlue-5) // vermelho maximo = azul minimo + vermelho maximo
    {
        analogWrite(B, ValorBlue);
        delay(50);
    }
}
