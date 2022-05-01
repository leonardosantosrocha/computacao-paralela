# UPM - Faculdade de Computação e Informática

### Projeto - Taylor V0
> Leonardo Santos da Rocha | 32092261</br>
Vitor de Sousa Uema | 32028555</br>
Talyta Scaramuzzo | 32079915</br>
CC05D

</br>

## Overview

### Objetivo
> O projeto tem por objetivo realizar a implementação da Série de Taylor em sua versão inicial e não paralelizada.</br>
### Diagrama de grafo acíclico
> Por se tratar de um programa sequencial, para realizar o cálculo T(n) precisamos do cálculo prévio de T(n-i), onde "i" representa todos os números inteiros positivos e maiores que zero antecessores a "n".</br>
> ![img](https://i.ibb.co/1bc3Mjm/imagem-2022-05-01-131501656.png)


</br>

## Instruções para download e execução dos programas

### Como baixar os arquivos?
> Todos os exercícios podem ser encontrados no endereço "https://github.com/leonardosantosrocha/computacao-paralela/tree/main/projeto", basta realizar o download e centrazalizá-los em um único diretório.

### Como executar os programas online?
> Copie o código disponível em "https://github.com/leonardosantosrocha/computacao-paralela/blob/main/projeto/taylor_v0.py", selecione um dos compiladores listados abaixo e cole o código copiado anteriormente no campo de edição de texto, após isso basta executar.</br>
> - Replit: https://replit.com/;</br> 
> - JDoodle: https://www.jdoodle.com/python3-programming-online/;</br> 
> - IdeOne: https://ideone.com;

### Como executar os programas localmente?
> Após realizar a instalação do Python no seu computador através de uma das opções abaixo, basta executar o programa utilizando o interpretador da linguagem.</br>
> - Instalação e execução de códigos Python no sistema operacional Windows: https://www.youtube.com/watch?v=pDBnCDuL-dc;</br>
> - Instalação e execução de códigos Python no sistema operacional Linux: https://www.youtube.com/watch?v=rk8uMDAguZ4;

</br>

## Descritivo dos programas
### Exercício 01: Série de Taylor V0
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: após executar o programa para T=10, o programa deverá apresentar o resultado 2.8289682539682537 ou algo próximo.

</br>

## Resultados obtidos com a execução do programa
|         T(n)        |    Segundos   |    Resultado   |
| :------------------ | :------------ | :------------- |
| 1000000             | 0.006001472   | 12.090113613   |
| 10000000            | 0.05192852    | 14.39272572    |
| 100000000           | 0.593459368   | 16.69531127    |
| 1000000000          | 5.971246481   | 18.9978964     |
| 10000000000         | 59.7614615    | 21.3004815     |
| 100000000000        | 5434.650105   | 26.60306659    |

</br>

##### 28/04/2022 - 05/05/2022
