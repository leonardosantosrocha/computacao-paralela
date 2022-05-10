# UPM - Faculdade de Computação e Informática

### Projeto - Tartaruga
> Leonardo Santos da Rocha | 32092261</br>
Vitor de Sousa Uema | 32028555</br>
Talyta Scaramuzzo | 32079915</br>
CC05D

</br>

## Overview

### Objetivo
> O projeto tem por objetivo realizar a implementação do cálculo de T(n) = (1/1) + (1/2) + (1/3) + ... + (1/n).</br>
> Trata-se de um desafio contínuo, logo as melhorias serão realizadas de forma incremental a fim de aumentar a perfomance do programa.</br>

</br>

## Instruções para download, compilação e execução dos programas

### Como baixar os arquivos?
> Todos os exercícios podem ser encontrados no endereço "https://github.com/leonardosantosrocha/computacao-paralela/tree/main/projeto", basta realizar o download e centrazalizá-los em um único diretório.

### V1: Como compilar os programas?
> Abra o terminal e digite o comando "gcc arquivo_a_compilar.c -o apelido_do_arquivo" para compilar o arquivo.

### V2: Como compilar os programas?
> Abra o terminal e digite o comando "gcc arquivo_a_compilar.c -o apelido_do_arquivo -lpthread" para compilar o arquivo.

### Como executar os programas?
> Após compilar, digite o comando "./apelido_do_arquivo" para executar o arquivo.

### O meu programa funcionará no Windows?
> Para compilar e executar programas via terminal (cmd) no Windows é necessário ter o GCC instalado e configurado como uma variável de ambiente.

</br>

## Descritivo dos programas

### V1: Tartaruga
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: a função t(10) irá gerar T(n) = 2.9289682540 ou números com pequenas variações.

### V2: Tartaruga
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: a função t(1000) irá gerar T(n) = 7.4854708606 ou números com pequenas variações.

</br>

## Diagramas de grafos acíclicos e speedup
### V1: Implementação sequencial
> Por se tratar de um programa sequencial, para realizar o cálculo de T(n) precisamos calcular a soma de T(n-i), onde "n" representa o número final, enquanto "i" representa todos os inteiros positivos maiores que zero e anteriores a "n".</br>
> ![img](https://i.ibb.co/q0GgmZy/img.png)

### V2: Implementação com duas threads
> Por se tratar de um programa no qual utilizamos duas threads, com a fórmula S = Tempo de Execução Sequencial / Tempo de Execução Paralelo, teremos S = 0.0000050000/0.0000010000 = 5.</br>

</br>

## Análise de performance

### V1: Resultados da execução do programa
> Para realizar testes na V1 do projeto utilizamos "n" variando de 10^1 à 10^9, ao realizar o cálculo de 10^10 o tipo de dado utilizado apresentou overflow, logo precisaremos ajustar o tipo de dado na próxima versão do projeto.

|         n           |    Segundos   |      T(n)      |
| :------------------ | :------------ | :------------- |
| 10                  | 0.0000030000  | 02.9289682540  |
| 100                 | 0.0000020000  | 05.1873775176  |
| 1000                | 0.0000050000  | 07.4854708606  |
| 10000               | 0.0000300000  | 09.7876060360  |
| 100000              | 0.0002810000  | 12.0901461299  |
| 1000000             | 0.0027540000  | 14.3927267229  |
| 10000000            | 0.0526600000  | 16.6953113659  |
| 100000000           | 0.2749890000  | 18.9978964139  |
| 1000000000          | 2.7386450000  | 21.3004815023  |


### V2: Resultados da execução do programa
> Para realizar testes na V2 do projeto utilizamos "n" variando de 10^1 à 10^9, ao realizar cálculos para 10^6 e seus sucessores, notamos que houve uma perda de precisão significante em relação a versão inicial do projeto.

|         n           |    Segundos   |      T(n)      |
| :------------------ | :------------ | :------------- |
| 10                  | 0.0000010000  | 02.9289682540  |
| 100                 | 0.0000010000  | 05.1873775176  |
| 1000                | 0.0000010000  | 07.4854708606  |
| 10000               | 0.0000010000  | 09.7876060360  |
| 100000              | 0.0000020000  | 11.6596762386  |
| 1000000             | 0.0000025000  | 13.6237045016  |
| 10000000            | 0.0000050000  | 15.4082039976  |
| 100000000           | 0.0000150000  | 16.4041574309  |
| 1000000000          | 0.0025000000  | 18.2043984609  |

</br>

##### V1: 28/04/2022 - 05/05/2022
##### V2: 05/05/2022 - 09/05/2022
