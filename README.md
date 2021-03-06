# arduino
Exercícios

<br> <br>
Arduino Uno R3 e software Fritzing <br> <br>

## Observação: 
Cada programa contem uma imagem da montagem na protoboard feito com o software Fritzing. <br> <br>

## Objetivo:
Aprimorar meu conhecimento em Arduino ao fazer exercícios sobre o assunto, aprendendo a usar cada componente e as bibliotecas disponíveis, ao seguir tutoriais do Youtube e PDFs disponibilizados na Internet. <br>



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
Componentes usados: 3 Resistores 330 ohm, Receptor Universal Infravermelho VS1838B 38Khz, Controle Remoto 38kHz, 1 Led Vermelho, 1 Led Verde e 1 Led Amarelo. <br>
Tecla 1 -> Acende led vermelho <br>
Tecla 2 -> Apaga led vermelho <br>
Tecla 4 -> Acende led verde <br>
Tecla 5 -> Apaga led verde <br>
Tecla 7 -> Acende led amarelo <br>
Tecla 8 -> Apaga led amarelo <br> 
Tecla 3 -> Apaga os 3 leds <br> <br>
É necessário ter a biblioteca IRremote (de shiirf) instalada no Arduino IDE. <br> <br>
Lembre-se de colocar a bateria do controle na posição correta (Positivo no lado positivo) para o controle funcionar. <br> <br>
O valor lido pelo receptor retorna um endereço em Hexa. <br> <br>
Código das teclas (Use 0x antes de cada código, ex: 0xFFA25D): <br> <br>
Tecla | Código
------------ | -------------
1 | FFA25D
2 | FF629D
3 | FFE21D
4 | FF22DD
5 | FF02FD
6 | FFC23D
7 | FFE01F
8 | FFA857
9 | FF906F
0 | FF9867
\* | FF6897
\# | FFB04F	
&#8593; | FF18E7
&#8595; | FF4AB5
&#8594; | FF5AA5
&#8592; | FF10EF
OK | FF38C7

modulo_rfid -> Ao carregar o programa no Arduino, abra o monitor serial e aproxime o cartão ou chaveiro próximo do módulo RFID e observe o monitor serial ler as informações. <br>
Lembre-se de ter os pinos soldados do módulo RFID para funcionar corretamente. <br>
É necessário que a alimentação seja de 3,3V para não queimar o Módulo RFID. <br>
É necessário ter a biblioteca MFRC522 instalada no Arduino (https://github.com/makerspaceleiden/rfid). Nesta biblioteca é possível ver em quais entradas digitais os pinos devem entrar de acordo com o tipo de Arduino.  <br>
Componentes usados: Kit Módulo Rfid Mfrc522 13,56 Mhz, Cartão Rfid Mfrc522 13,56 Mhz e Chaveiro Tag Rfid Mifare 1k 13.56 Mhz. <br>

rtc_ds1307 -> Ao carregar o programa no Arduino, o monitor serial irá mostrar a data (dia, mês, ano) e o horário (horas, minutos, segundos). <br>
É necessário ter a biblioteca RTClib da Adafruit instalada. <br>
Componentes usados: Módulo Real Time Clock RTC Ds1307 <br>
Lembre-se de ter os pinos soldados do Módulo Real Time Clock RTC Ds1307 para funcionar corretamente. <br>

controle_rgb -> Ao carregar o programa, o led RGB mostra as cores em sequência, com delay de 1s: Vermelho, Verde e Azul. Componentes usados: 3 Resistores 330 ohm e Led RGB 5mm - Catodo Comum. <br> <br>

rgb_tons -> Ao carregar o programa, o led RGB mostra diferentes tons de cores em sequência (mostrando o fraco até o forte de uma determinada cor): amarelo, verde, azul bem claro, azul, violeta, vermelho, ficando em loop até desligar a placa. Componentes usados: 3 Resistores 330 ohm e Led RGB 5mm - Catodo Comum. <br> <br>

ir_rgb -> Ao carregar o programa, o usuário pode controlar o led RGB com o controle remoto IR. É possível fazer mistura de cores, tais como: violeta = azul + vermelho, azul bem claro = verde + azul, amarelo = verde + vermelho. Componentes usados: 3 Resistores 330 ohm, Led RGB 5mm - Catodo Comum, Receptor Universal Infravermelho VS1838B 38Khz e Controle Remoto 38kHz (sem bateria).   <br> 
Tecla 1 -> Acende cor vermelho <br>
Tecla 2 -> Apaga cor vermelho <br>
Tecla 4 -> Acende cor verde <br>
Tecla 5 -> Apaga cor verde <br>
Tecla 7 -> Acende cor azul <br>
Tecla 8 -> Apaga cor azul <br> 
Tecla 3 -> Acende as cores em sequência, com delay de 1s: Vermelho, Verde e Azul. <br> 
Tecla 6 -> Apaga as 3 cores <br> <br>

lm35 -> Ao carregar o programa, o monitor serial pegará a média de 10 temperaturas medidas pelo sensor e mostrará na tela. Componentes usados: Sensor Temperatura LM35DZ. <br> <br>

lm35_lcd_16x2 -> Ao carregar o programa, o LCD mostrará a Temperatura em Graus Celsius. Gire o Potenciômetro para ter uma visão melhor das letras no LCD. Componentes usados: Potenciômetro Linear 10KΩ, Display Lcd 16x2 com Backlight Azul e Sensor Temperatura LM35DZ. <br> <br>

buzzer_sirene -> Ao carregar o programa no Arduino, começará um som de sirene. Componente usado: Buzzer Ativo 5V. <br> <br>


jogo_dino -> Ao carregar o programa no Arduino, coloque o sensor próximo a tela do computador (em uma posição não muito distante do dinossauro e não muito perto do dinossauro) e o Servo Motor próximo a barra de espaço. Acesse o site chrome://dino/ e veja o dinossauro pulando os cactos por meio do servo motor e do sensor. Componentes usados: Resistor 10K 1/4W, Sensor Fotoresistor LDR de 5mm e Micro Servo 9g SG90 TowerPro. Conforme o sensor detecta o escuro (cactos pretos), o dinossauro pula, o servo motor é acionado com um ângulo de 40 graus que pressiona a barra de espaço. Quando a luz é clara, o dinossauro não pula. Maior dificuldade desse projeto é conseguir achar uma posição boa para o sensor na tela, pois a velocidade com que o cacto se movimenta na tela é muito rápido para o sensor ler. Talvez utilizando um LDR com tamanho de 7mm ou 10mm ou 12mm seja mais fácil de conseguir, por ser mais sensível o sensor quanto maior o tamanho. Além disso, o servo motor não possui uma força suficiente para apertar a barra de espaço, para isso, pode-se aumentar o ângulo ao detectar o escuro (momento que o dinossauro pula). Este programa não funciona para níveis mais avançados, tais como passáros na tela, quando o dinossauro e os cactos ficam brancos e o fundo preto. <br> <br>


## Fonte:
* https://conteudo.eletrogate.com/apostila-arduino-maker <br>
* https://www.youtube.com/channel/UCcGk83PAQ5aGR7IVlD_cBaw <br>
* https://www.youtube.com/channel/UCyA0hVjN35YmMZLyZkES-Pg <br>
* https://athoselectronics.com/ <br>
* https://www.youtube.com/user/iberethenorio <br>

