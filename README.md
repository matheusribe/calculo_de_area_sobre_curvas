# Implementando cálculo da área sobre curvas.
Este código é um programa simples que calcula a área sob uma curva por meio de três métodos: Retângulo, Triângulo Retângulo e Semicircunferência. O usuário pode ajustar o intervalo de integração e o número de subdivisões, definindo os valores das variáveis **`a`**, **`b`** e **`n`**.
## **Função a ser integrada**
A função a ser integrada é definida pela função **`funcao()`**, que é implementada como uma função **`float`** e retorna um valor **`float`**. Para alterar a função a ser integrada, basta modificar a implementação desta função.
## **Métodos de integração**
### **Retângulo**
O método do Retângulo é implementado na função **`retangulo()`**. Ele divide o intervalo de integração em **`n`** subintervalos de largura constante **`base`** e aproxima a área sob a curva em cada subintervalo com o produto da largura do subintervalo e a altura da função no ponto médio do subintervalo. A soma dessas áreas resulta na área total sob a curva.
### **Triângulo Retângulo**
O método do Triângulo Retângulo é implementado na função **`triangulo_retangulo()`**. Ele divide o intervalo de integração em **`n`** subintervalos de largura constante **`base`** e aproxima a área sob a curva em cada subintervalo com a soma de duas áreas triangulares: uma com base igual a **`base`** e altura igual à função no ponto inicial do subintervalo, e outra com base igual a **`base`** e altura igual à função no ponto final do subintervalo. A soma dessas áreas resulta na área total sob a curva.
### **Semicircunferência**
O método da Semicircunferência é implementado na função **`semi_circunferencia()`**. Ele divide o intervalo de integração em **`n`** subintervalos de largura constante **`base`** e aproxima a área sob a curva em cada subintervalo com a soma de duas áreas: a área de um retângulo com base igual a **`base`** e altura igual à função no ponto inicial do subintervalo, e a área de uma semicircunferência com raio igual à metade da base do subintervalo. A soma dessas áreas resulta na área total sob a curva.
## **Resultados**
Os resultados de cada método de integração são impressos na saída padrão, mostrando a área aproximada de cada subintervalo e o somatório final das áreas. O usuário pode ajustar o número de casas decimais que deseja ver alterando o formato de impressão com a função **`printf()`**. A área total sob a curva é a soma das áreas aproximadas de cada subintervalo.
