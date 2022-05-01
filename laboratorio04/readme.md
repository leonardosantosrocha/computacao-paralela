# UPM - Faculdade de Computação e Informática

### Laboratório 04 - Memória Compartilhada e Uso de Processos Pai e Filho
> Leonardo Santos da Rocha | 32092261</br>
Vitor de Sousa Uema | 32028555</br>
Talyta Scaramuzzo | 32079915</br>
CC05D

</br>

## Overview

### Objetivo
> O projeto tem por objetivo mostrar a utilização de memória compartilhada entre processo pai e filho.

</br>

## Instruções para download, compilação e execução dos programas

### Como baixar os arquivos?
> Todos os exercícios podem ser encontrados no endereço "https://github.com/leonardosantosrocha/computacao-paralela/tree/main/laboratorio04", basta realizar o download e centrazalizá-los em um único diretório.

### Como compilar os programas?
> Abra o terminal e digite o comando "gcc arquivo_a_compilar.c -o apelido_do_arquivo" para compilar o arquivo.

### Como executar os programas?
> Após compilar, digite o comando "./apelido_do_arquivo"  para executar o arquivo.

### O meu programa funcionará no Windows?
> Para compilar e executar programas via terminal (cmd) no Windows é necessário ter o GCC instalado e configurado como uma variável de ambiente.

</br>

## Descritivo dos programas
### Exercício 01: Memória Compartilhada e Uso de Processos Pai e Filho
> Entre com: não há entrada de dados.</br>
> Como comprovar o resultado: após executar o programa, o programa deverá apresentar; shmid da memória compartilhada: inteiro aleatório; variável dado início: 0; processo filho: pid do processo filho | pid do processo pai; o pid do filho é maior que o pid do pai; variável dado no processo filho: 2; processo filho: pid do processo pai | pid do processo pai; os pids serão iguais; variável dado no processo pai: 8; o segmento de memória compartilhada foi excluído; validação da exclusão do segmento de memória compartilhada: abra o terminal e digite o comando "ipcs -m"; o shmid apresentado na execução do programa não deverá aparecer na coluna "shmid".

</br>

##### 17/03/2022 - 24/03/2022
