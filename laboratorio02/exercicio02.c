#include <stdio.h>
#include <unistd.h>

// 2. Uso do FORK() para criação de processos
int main(void)
{
  // Inicializando a variávei x
  int x;  // Pai: $r0 = 0; $r1 = ainda não incializado

  // Atribuindo 0 a variável x
  x = 0;  // Pai: $r0 = 0; $r1 = ainda não incializado

  // Criando um processo com FORK(), será o nosso processo filho
  // O Program Counter do processo pai inicia na linha zero da função
  // Enquanto o Program Counter do processo filho inicia na linha do FORK()
  fork(); // Pai: $r0 = 0; $r1 = ainda não incializado
  // Filho: aqui começa a execução do processo filho

  // Atribuindo 1 a variável x
  x = 1;  // Pai: $r0 = 1; $r1 = 0

  // Mostrando o id do processo e valor atribuido a x
  printf("I am process %ld and my x is %d\n", (long)getpid(), x);

  // Return 0
  return 0;
}
