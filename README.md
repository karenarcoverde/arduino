# arduino
Exercícios

<br> <br>
Arduino Uno R3 e software Fritzing <br> <br>

## Observação: 
Cada programa contem uma imagem da montagem na protoboard feito com o software Fritzing. <br> <br>


## Como funciona: 

led_piscando -> Execute o programa e o led irá piscar de 1 em 1s. Resistor usado: 330 ohm. <br> <br>
leitura_potenciometro -> Execute o programa, abre o monitor Serial, gire o knob do potenciometro. No monitor serial irá fornecer o valor da voltagem analógica (0V a 5V) e a voltagem digital (0 a 1023). Potenciometro usado: 10K ohm.<br> <br>

divisor_de_tensao -> Ao executar o programa e observar no monitor serial aparecerá o valor da voltagem no divisor de tensão 0 (próximo de 3,3V) e o valor da voltagem no divisor de tensão 1 (próximo de 2,5V). Resistores usados: 3 resistores de 330 ohms e 2 resistores de 1k ohm.<br> <br>

push-botton_led -> Ao executar o programa, o usuário deve apertar o botão para acender o led. Resistores usados: 2 resistores de 330 ohms. <br> <br> 

sensor_de_luz_ldr -> Ao executar o programa, na parte monitor serial, o usuário poderá ver quanto de voltagem está variando conforme variamos a intensidade da luz. Quanto maior a intensidade da luz, menor a tensão de saída. O LDR é um resistor cuja resistência varia com a quantidade de luz que incide sobre ele. Componentes usados: Resistor 10K ohm, Resistor 330 ohm, LDR e led. <br> 
OBS: Um led é colocado para medir quando a voltagem passa de 1.5V. Se for maior que 1.5V, o led acende. <br> <br>

micro_servo -> Execute o programa, observe o monitor serial com o valor A0 (saída do potenciometro) e angulo mudando. Gire o knob do potenciometro, conforme giramos o monitor serial muda os valores, A0 com valor de (0 a 1023) e angulo (0° a 180°). O motor muda a posição de acordo com o ângulo que botarmos. Componentes usados: Micro Servo 9g SG90 TowerPro, Potenciometro 10K ohm e Fonte ajustável para protoboard. <br> <br>

temperatura_ntc -> Execute o programa e observe no monitor serial a Temperatura em Celsius e a Temperatura em Kelvin. Para calcular a temperatura em Kelvin foi usado a equação Steinhart-Hart, posteriormente convertido para Celsius. Componentes usados: Resistor 10k ohm e Termistor NTC 5mm 10K. <br>
OBS: NTC = Negative Temperature Coeficient - a resistência elétrica diminui à medida que a temperatura aumenta. <br> <br>

ponte_h_rele -> Ao executar o programa, o motor DC gira no sentido antihorário depois de 3 segundos no sentido horário em loop infinito. Componentes usados: Motor DC 5,9V RF-300; Adaptador ajustável para protoboard e Módulo Relé 2 Canais 5v com Optoacoplador. <br>
OBS: A cada vez que muda de sentido, um led acende indicando qual relé está aceso. <br> <br>

sensor_dht11 -> Ao executar o programa, o monitor serial mostra a Temperatura (°C) e Umidade (%). É necessário ter a biblioteca "DHT sensor" e "Adafruit Unified Sensor" instalada no Arduino para executar o programa. Componentes usados: Resistor 10k ohm e Sensor de Umidade e Temperatura Dht11. <br> <br> 

lcd_16x2: <br>
contador_60 -> Ao executar o programa, o LCD mostrará a frase: "Exemplo LCD !" e na linha em baixo um contador de 0 a 60. <br> 
hello_world_scroll -> Ao executar o programa, o LCD mostra a frase Hello World rolando para esquerda. <br> 
Componentes usados: Potenciometro 10K ohm  e Display Lcd 16x2 com Backlight Azul. <br>
OBS: É necessário ter a biblioteca Liquid Crystal. <br> <br>

distancia_ultrassonico -> Ao executar o programa e observar o monitor serial mostrando a distância do objeto em metros e centímetros. Componente usado: Módulo Sensor de Distância Ultrassônico HC-SR04 <br> <br>

display_7segmentos_membrana -> Ao carregar o programa, aperte os botões da membrana e o valor correspondente aparecerá no display. Componentes usados: Teclado Matricial De Membrana - 16 Teclas, Resistor 330 ohm, Display de 7 segmentos com 1 Dígito (Catodo Comum) -  Modelo: HS-5161AS 1705R2 / 5611AH. <br>
Biblioteca usada para o Teclado de Membrana: Keypad de Mark Stanley <br>
Biblioteca usada para o Display de 7 segmentos: https://github.com/SindormirNet/SindormirSevenSegments <br> 
Lembre-se: os pinos 3 e 8 são correspondentes ao Catodo e Anodo, use apenas um para conectar o GND (se for Catodo Comum) ou o 5V (se for Anodo Comum).<br> <br>

controle_ir_led -> Ao carregar o programa no Arduino, aproxime o controle remoto IR próximo do receptor e aperte as teclas. <br> 
Tecla 1 -> Acende led vermelho <br>
Tecla 2 -> Apaga led vermelho <br>
Tecla 4 -> Acende led verde <br>
Tecla 5 -> Apaga led verde <br>
Tecla 7 -> Acende led amarelo <br>
Tecla 8 -> Apaga led amarelo <br>
É necessário ter a biblioteca IRremote (de shiirf) instalada. <br>
O valor lido pelo receptor retorna um endereço em Hexa <br>
Código das teclas (Use 0x antes de cada código, ex: OxFFA25D): <br>
Tecla | Código
------------ | -------------
1 | FFA25D
2 | FF629D


Tecla  ---------------------------  Código    <br>
1  -------------------------------  FFA25D   <br>
2  -------------------------------  FF629D   <br>
3  -------------------------------  FFE21D   <br>
4  -------------------------------  FF22DD   <br>
5  -------------------------------  FF02FD   <br>
6  -------------------------------  FFC23D   <br>
7  -------------------------------  FFE01F   <br>
8  -------------------------------  FFA857   <br>
9  -------------------------------  FF906F   <br>
0  -------------------------------  FF9867   <br>
\*  ------------------------------  FF6897   <br>
\#  ------------------------------  FFB04F   <br>
seta para cima  ------------------  FF18E7   <br>
seta para baixo  -----------------  FF4AB5   <br>
seta para direita  ---------------  FF5AA5   <br>
seta para esquerda  --------------  FF10EF   <br>
OK  ------------------------------  FF38C7   <br>
