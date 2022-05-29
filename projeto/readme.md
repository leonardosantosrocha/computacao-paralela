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

### V3: Como compilar os programas?
> Abra o terminal e digite o comando "gcc -g -Wall -fopenmp -o main main.c" para compilar o arquivo.

### Como executar os programas?
> Após compilar, digite o comando "./apelido_do_arquivo" para executar o arquivo.

### O meu programa funcionará no Windows?
> Para compilar e executar programas via terminal (cmd) no Windows é necessário ter o GCC instalado e configurado como uma variável de ambiente.

</br>

## Descritivo dos programas

### V1: Tartaruga Serial
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: a função t(10^10) irá gerar T(n) = 23.6030665949 ou números com pequenas variações.

### V2: Tartaruga Pthreads (6 threads)
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: a função t(10^10) irá gerar T(n) = 11.3624498316 ou números com grandes variações.

### V3: Tartaruga OpenMP (6 threads)
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: a função t(10^10) irá gerar T(n) = 23.6030665949 ou números com pequenas variações.

</br>

## Diagramas de grafos acíclicos e speedup

### V1: Tartaruga Serial
> Por se tratar de um programa sequencial, para realizar o cálculo de T(n) precisamos calcular a soma de T(n-i), onde "n" representa o número final, enquanto "i" representa todos os inteiros positivos maiores que zero e anteriores a "n".</br>
> ![img](https://i.ibb.co/q0GgmZy/img.png)

### V2: Tartaruga Pthreads (6 threads)
> Após realizar testes para os valores 10^10, 10^11, 10^12 e 10^13, percebemos que diferentemente da versão serial implementada, a versão em questão conta com grande perda de precisão para o cálculo da função, além de aumentar o tempo de processamento do algoritmo. A perda de precisão é gerada quando as seis threads tentam escrever na memória compartilhada de maneira síncrona, o que nos trás imprecisões com relação ao que foi gravado no endereço de memória; o tempo de processamento aumentou devido a má implementação das funções redudantes para threads.</br>

### V3: Tartaruga OpenMP (6 threads)
> Após realizar testes para os valores 10^10, 10^11, 10^12 e 10^13, notamos um grande salto em relação a versão serial e pthreads, pois a versão em questão gera o mesmo valor do programa serial, ou seja, não há perda de precisão, além de possuir um speedup de aproximadamente seis pontos. A perda de precisão foi anulada pois utilizamos a diretiva "#pragma omp critical" para realizar o gerenciamento de escrita no endereço de memória compartilhado; o tempo de processamento diminuiu pois o processamento foi dividido entre seis threads.

</br>

## Análise de performance

### V1: Tartaruga Serial
> Precisão correta, tempo de execução crítico.

|         n           |      t(n)     |      time      |
| :------------------ | :------------ | :------------- |
| 10000000000         | 23.6030665949 | 1m13.782s      |
| 100000000000        | 25.9056516900 | 12m10.434s     |
| 1000000000000       | 28.2082367800 | 119m25.408s    |
| 10000000000000      | 30.5108218738 | 1263m32.28s    |


### V2: Tartaruga Pthreads (6 threads)
> Precisão incorreta, tempo de execução crítico.

|         n           |       t(n)      |      time      |
| :------------------ | :-------------- | :------------- |
| 10000000000         | 11.362449831600 | 1m13.782s      |
| 100000000000        | 1.7296653591000 | 12m10.434s     |
| 1000000000000       | 0.1129665359100 | 119m25.408s    |
| 10000000000000      | -0.018703346409 | 1263m32.28s    |

### V3: Tartaruga OpenMP (6 threads)
> Precisão correta, tempo de execução aceitável.

|         n           |      t(n)     |      time      |
| :------------------ | :------------ | :------------- |
| 10000000000         | 23.6030665949 | 0m12.862s      |
| 100000000000        | 25.9056516900 | 2m5.931s       |
| 1000000000000       | 28.2082367800 | 21m12.751s     |
| 10000000000000      | 30.5108218738 | 212m33.556ss   |

</br>

## Conclusão do desenvolvimento do projeto

### V1: Tartaruga Serial
> Temos um programa que cálcula a função de maneira correta, entretanto, devido a falta de paralelismo o tempo de processamento é impraticável para valores maiores que 10^12. </br>

### V2: Tartaruga Pthreads (6 threads)
> Temos um programa que cálcula a função de maneira incorreta, além disso, devido ao péssimo gerenciamento da memória compartilhada acabamos gerando resultados extremamente imprecisos para valores maiores que 10^10. </br>

### V3: Tartaruga OpenMP (6 threads)
> Temos um programa que cálcula a função de maneira correta, além disso, devido a criação de variáveis auxiliares para realizar o acesso ordenado a memória compartilhada, não perdemos a precisão da função e aumentado o speedup em seis pontos.

</br>

##### V1: 28/04/2022 - 05/05/2022
##### V2: 05/05/2022 - 09/05/2022
##### V3: 09/05/2022 - 17/05/2022
