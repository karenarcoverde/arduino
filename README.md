# arduino
Exercícios

<br> <br>
Arduino Uno R3 e software Fritzing <br> <br>

## Observação: 
Cada programa contem uma imagem da montagem na protoboard feito com o software Fritzing. <br> <br>


## Como funciona: 

led_piscando -> Execute o programa e o led irá piscar de 1 em 1s. Resistor usado: 330 ohm. <br> <br>
leitura_potenciometro -> Execute o programa, abre o monitor Serial, gire o knob do potenciometro. No monitor serial irá fornecer o valor da voltagem analógica (0V a 5V) e a voltagem digital (0 a 1023). Potenciometro usado: 10K.<br> <br>

divisor_de_tensao -> Ao executar o programa e observar no monitor serial aparecerá o valor da voltagem no divisor de tensão 0 (próximo de 3,3V) e o valor da voltagem no divisor de tensão 1 (próximo de 2,5V). Resistores usados: 3 resistores de 330 ohms e 2 resistores de 1k ohm.<br> <br>

push-botton_led -> Ao executar o programa, o usuário deve apertar o botão para acender o led. Resistores usados: 2 resistores de 330 ohms. <br> <br> 

sensor_de_luz_ldr -> Ao executar o programa, na parte monitor serial, o usuário poderá ver quanto de voltagem está variando conforme variamos a intensidade da luz. Quanto maior a intensidade da luz, menor a tensão de saída. O LDR é um resistor cuja resistência varia com a quantidade de luz que incide sobre ele. Componentes usados: Resistor 10K ohm, Resistor 330 ohm, LDR e led. <br> 
OBS: Um led é colocado para medir quando a voltagem passa de 1.5V. Se for maior que 1.5V, o led acende. <br> <br>

micro_servo -> Execute o programa, observe o monitor serial com o valor A0 (saída do potenciometro) e angulo mudando. Gire o knob do potenciometro, conforme giramos o monitor serial muda os valores, A0 com valor de (0 a 1023) e angulo (0° a 180°). O motor muda a posição de acordo com o ângulo que botarmos. Componentes usados: Micro Servo 9g SG90 TowerPro, Potenciometro 10K e Fonte ajustável para protoboard. <br> <br>

temperatura_ntc -> Execute o programa e observe no monitor serial a Temperatura em Celsius e a Temperatura em Kelvin. Para calcular a temperatura em Kelvin foi usado a equação Steinhart-Hart, posteriormente convertido para Celsius. Componentes usados: Resistor 10k ohm e Termistor NTC 5mm 10K.<br> <br>
