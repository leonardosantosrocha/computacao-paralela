#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

// 6. Cálculo de fatorial utilizando processo pai e filho
int main()
{
  // Capturando o pid do processo atual
  pid_t pid = getpid();

  // Gerando o processo filho utilizando o FORK()
  pid_t child = fork();

  // Validando os processos
  printf("\nPid:%d\nChild:%d\n", pid, child);

  // Verificando se o processo filho foi iniciado com sucesso
  if (child == -1)
  {
    // Printando a mensagem de erro para o usuário
    perror("Falha ao iniciar o processo filho!");
    return 1;
  }

  // Execução do processo filho
  if (child == 0)
  {
    // Definição das variáveis para cálculo do fatorial
    int i, j, num;

    // Entrada do número para cálculo do fatorial
    printf ("\nEnter the number: ");
    scanf ("%d", &num);

    // "j" será igual ao "num" inserido
    j = num;

    // Cálculo do fatorial
    for (i = 1; j > 1; j = j - 1)
    {  // Cálculo de "i"
      i = i * j;
    }

    // Printando o fatorial e pids para o usuário
    printf("The factorial of %d is %d", num, i);
    printf("\nI am child %ld, pid = %ld\n", (long)getpid(), (long)pid);
  }
  // Execução do processo pai
  else
  {
    // Aguardando a execução do processo filho
    wait(NULL);

    // Definição das variáveis para cálculo do fatorial
    int i, j, num;

    // Entrada do número para cálculo do fatorial
    printf ("\nEnter the number: ");
    scanf ("%d", &num);

    // "j" será igual ao "num" inserido
    j = num;

    // Cálculo do fatorial
    for (i = 1; j > 1; j = j - 1)
    {  // Cálculo de "i"
      i = i * j;
    }

    // Printando o fatorial e pids para o usuário
    printf("The factorial of %d is %d", num, i);
    printf("\nI am parent %ld, pid = %ld\n", (long)getpid(), (long)pid);
  }

  // Return 0
  return 0;
}
