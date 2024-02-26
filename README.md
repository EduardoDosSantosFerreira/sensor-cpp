# Projeto Arduino de Sistema de Alarme com Sensor de Movimento

![Sistema de Alarme](https://github.com/EduardoDosSantosFerreira/sensor_de_movimento/blob/main/sensor.png)

O código implementa um sistema de alarme que utiliza um sensor de movimento para detectar intrusos. Além disso, o sistema é equipado com um display LCD para mostrar o status do alarme.

## Componentes Utilizados

- 1 Sensor de movimento
- 1 LED
- 1 Buzzer (Alarme)
- 1 Display LCD com interface I2C

## Funcionamento do Código

1. **Configuração Inicial**

   - O código define os pinos para o sensor de movimento, LED, buzzer e alimentação.
   - Inicializa a comunicação serial e o display LCD.

2. **Monitoramento do Sensor de Movimento**

   - O código verifica o estado do sensor de movimento.
   - Caso o sensor detecte movimento e o alarme esteja ligado, o sistema aciona o alarme e exibe a mensagem "PERIGO" e "INTRUSO" no display LCD.

3. **Controle do Alarme**

   - Quando o sensor detecta movimento e o alarme está ligado, o buzzer emite um som de alarme e o LED pisca intermitentemente.

4. **Exibição no Display LCD**

   - O display LCD mostra mensagens indicando se o alarme está ligado ou desligado, bem como alertas de intrusão.

## Considerações Finais

Esse projeto demonstra como utilizar um sensor de movimento em conjunto com um display LCD e um buzzer para criar um sistema de alarme simples. A aplicação prática inclui a proteção de ambientes residenciais ou comerciais, alertando sobre a presença de intrusos quando o alarme está ativado.
