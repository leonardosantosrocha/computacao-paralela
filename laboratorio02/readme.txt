// Universidade Presbiteriana Mackenzie
// Faculdade de Computação e Informática
//
//
//
// Laboratório 02 - Processos
// Leonardo Santos da Rocha | 32092261
// Vitor de Sousa Uema      | 32028555
// Talyta Scaramuzzo        | 32079915
// CC05D
//
//
//
// Instruções para download, compilação e execução dos arquivos:
//
// 01. Como baixar os arquivos?
// R: Todos os exercícios podem ser encontrados no endereço "https://github.com/leonardosantosrocha/computacao-paralela/tree/main/laboratorio02", basta realizar o download.
//
// 02. Como compilar os programas?
// R: Abra o terminal e digite o comando "gcc arquivo_a_compilar.c -o apelido_do_arquivo" para compilar o arquivo.
//
// 03. Como executar os programas?
// R: Para os exercícios 01, 02, 03, 04 e 06, digite o comando "./apelido_do_arquivo" para executar o arquivo.
// R: Para o exercício 05, digite o comando "./apelido_do_arquivo processes" para executar o arquivo.
//
// 04. O meu programa funcionará no Windows?
// R: Para compilar e executar programas via terminal (cmd) no Windows é necessário ter o GCC instalado e configurado como uma variável de ambiente.
//
//
//
// Instruções para execução dos programas:
//
// 01. Introdução aos conceitos de processo pai e processo filho
// Entre com:
// 	- Não há entrada de dados;
// Como comprovar o resultado: 
//  - Após executar o programa, deverá aparecer a mensagem "I am process B" seguida por "My parent is A", onde B é um número maior que A.
//
// 02. Criação de processos filhos com FORK()
// Entre com:
// 	- Não há entrada de dados;
// Como comprovar o resultado: 
//  - Após executar o programa, deverá aparecer a mensagem "I am process A and my X is 1" seguida por "I am process B and my X is 1", onde B é um número maior que A, além de X permanecer igual para ambos os processos.
//
// 03. Execução de processos com condicionais
// Entre com:
//	- Não há entrada de dados;
// Como comprovar o resultado: 
//  - Após executar o programa, deverá aparecer a mensagem "I am parent A" seguida por "I am child B", onde B é um número maior que A, o "desvio no fluxo" causado pela validação "childpid == 0" deverá fazer com que o processo pai seja executado, seguido posteriormente pelo processo filho.
//
// 04. Execução de processos com desvio de fluxos
// Entre com:
//	- Não há entrada de dados;
// Como comprovar o resultado: 
//  - Após executar o programa, deverá aparecer a mensagem "I am parent A, ID = A" seguida por "I am child B, ID = A", onde B é um número maior que A, onde podemos verificar que o processo pai faz referência a si próprio, enquanto o processo filho faz referência ao processo pai.
//
// 05. Execução de processos com laços de repetição
// Entre com:
// 	- Não há entrada de dados;
// Questões do slide:
// 1) Rode o programa anterior para valores grandes de n. As mensagens sempre estarão ordenadas pelo valor de i?
//  - Mesmo alterando o valor de "n" somente um texto foi apresentado ao usuário, entretanto, notamos que grandes valores atribuidos a "n" causam o uso de cem por cento do processador, muito provavelmente pela geração de vários processos.
// 2) O que acontece se o programa anterior escreve-se as mensagens para sys.stdout, usando print, ao invés de para sys.stderr?
//  - Não notamos diferenças na execução utilizando sys.stdout.
// Como comprovar o resultado: 
//  - Após executar o programa, deverá aparecer a mensagem "i=1 process ID=A parent ID=B child ID=C", onde "process ID" faz referência ao processo atual, "parent ID" faz referência ao processo pai e "child ID" faz referência ao último processo filho a ser executado.
//
// 06. Execução do cálculo fatorial utilizando processo pai e processo filho
// Entre com:
// 	- Um número inteiro positivo para o cálculo do fatorial no processo filho;
//	- Um número inteiro positivo para o cálculo do fatorial no processo pai;
// Como comprovar o resultado: 
//  - Após executar o programa, deverá aparecer "Pid: A" e "Child: B" seguido por "Pid: A" e "Child: 0", posteriormente a execução do processo filho com a entrada do primeiro número para cálculo do fatorial, mostrará a mensagem "The factorial of X is X!" seguido por "I am child B, pid = A", a execução do processo pai com a entrada do segundo número para cálculo do fatorial, mostrará a mensagem "The factorial of Y is Y!" seguido por "I am parent A, pid = A".
//
//
//
// 24/02/2022 - 03/03/2022
