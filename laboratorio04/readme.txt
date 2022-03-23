// Universidade Presbiteriana Mackenzie
// Faculdade de Computação e Informática
//
//
//
// Laboratório 04 - Memória Compartilhada e Uso de Processos Pai e Filho
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
// R: Todos os exercícios podem ser encontrados no endereço "https://github.com/leonardosantosrocha/computacao-paralela/tree/main/laboratorio04", basta realizar o download.
//
// 02. Como compilar os programas?
// R: Abra o terminal e digite o comando "gcc arquivo_a_compilar.c -o apelido_do_arquivo" para compilar o arquivo.
//
// 03. Como executar os programas?
// R: Após compilar, digite o comando "./apelido_do_arquivo"  para executar o arquivo.
//
// 04. O meu programa funcionará no Windows?
// R: Para compilar e executar programas via terminal (cmd) no Windows é necessário ter o GCC instalado e configurado como uma variável de ambiente.
//
//
//
// Instruções para execução dos programas:
//
// 01. Memória Compartilhada e Uso de Processos Pai e Filho
// Entre com:
//  - Não há entrada de dados via teclado;
// Como comprovar o resultado: 
//  - Após executar o programa, o programa deverá apresentar:
//    - Shmid da memória compartilhada: inteiro aleatório;
//    - Variável dado início: 0;
//    - Processo filho: pid do processo filho | pid do processo pai; o pid do filho é maior que o pid do pai;
//    - Variável dado no processo filho: 2;
//    - Processo filho: pid do processo pai | pid do processo pai; os pids serão iguais;
//    - Variável dado no processo pai: 8;
//    - O segmento de memória compartilhada foi excluído;
//  - Validação da exclusão do segmento de memória compartilhada:
//    - Abra o terminal e digite o comando "ipcs -m";
//    - O shmid apresentado na execução do programa não deverá aparecer na coluna "shmid";
//
//
//
// 17/03/2022 - 24/03/2022 
