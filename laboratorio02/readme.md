# UPM - Faculdade de Computação e Informática

### Laboratório 02 - Processos
> Leonardo Santos da Rocha | 32092261</br>
Vitor de Sousa Uema | 32028555</br>
Talyta Scaramuzzo | 32079915</br>
CC05D

</br>

## Overview

### Objetivo
> O projeto tem por objetivo mostrar o uso do processos pai e filho na linguagem C.

</br>

## Instruções para download, compilação e execução dos programas

### Como baixar os arquivos?
> Todos os exercícios podem ser encontrados no endereço "https://github.com/leonardosantosrocha/computacao-paralela/tree/main/laboratorio02", basta realizar o download e centrazalizá-los em um único diretório.

### Como compilar os programas?
> Abra o terminal e digite o comando "gcc arquivo_a_compilar.c -o apelido_do_arquivo" para compilar o arquivo.

### Como executar os programas?
> Para os exercícios 01, 02, 03, 04 e 06, digite o comando "./apelido_do_arquivo" para executar o arquivo.</br>
> Para o exercício 05, digite o comando "./apelido_do_arquivo processes" para executar o arquivo.

### O meu programa funcionará no Windows?
> Para compilar e executar programas via terminal (cmd) no Windows é necessário ter o GCC instalado e configurado como uma variável de ambiente.

</br>

## Descritivo dos programas
### Exercício 01: Introdução aos conceitos de processo pai e processo filho
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: após executar o programa, deverá aparecer a mensagem "I am process B" seguida por "My parent is A", onde B é um número maior que A.

### Exercício 02: Criação de processos filhos com FORK()
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: após executar o programa, deverá aparecer a mensagem "I am process A and my X is 1" seguida por "I am process B and my X is 1", onde B é um número maior que A, além de X permanecer igual para ambos os processos.

### Exercício 03: Execução de processos com condicionais
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: após executar o programa, deverá aparecer a mensagem "I am parent A" seguida por "I am child B", onde B é um número maior que A, o "desvio no fluxo" causado pela validação "childpid == 0" deverá fazer com que o processo pai seja executado, seguido posteriormente pelo processo filho.

### Exercício 04: Execução de processos com desvio de fluxos
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: após executar o programa, deverá aparecer a mensagem "I am parent A, ID = A" seguida por "I am child B, ID = A", onde B é um número maior que A, onde podemos verificar que o processo pai faz referência a si próprio, enquanto o processo filho faz referência ao processo pai.

### Exercício 05: Execução de processos com laços de repetição
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: após executar o programa, deverá aparecer a mensagem "i=1 process ID=A parent ID=B child ID=C", onde "process ID" faz referência ao processo atual, "parent ID" faz referência ao processo pai e "child ID" faz referência ao último processo filho a ser executado.

### Exercício 06: Execução do cálculo fatorial utilizando processo pai e processo filho
> Entre com: um número inteiro positivo para o cálculo do fatorial no processo filho; um número inteiro positivo para o cálculo do fatorial no processo pai.</br>
> Como comprovar o resultado: após executar o programa, deverá aparecer "Pid: A" e "Child: B" seguido por "Pid: A" e "Child: 0", posteriormente a execução do processo filho com a entrada do primeiro número para cálculo do fatorial, mostrará a mensagem "The factorial of X is X!" seguido por "I am child B, pid = A", a execução do processo pai com a entrada do segundo número para cálculo do fatorial, mostrará a mensagem "The factorial of Y is Y!" seguido por "I am parent A, pid = A".

</br>

##### 24/02/2022 - 03/03/2022
