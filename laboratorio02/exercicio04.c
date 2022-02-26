#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

// 4. Uso do GETPID() junto ao FORK() para copia do processo pai no processo filho
int main(void)
{
  // Inicialização da variável childpid com o valor zero
  pid_t childpid;

  // Inicialização da variável mypid com o valor zero
  pid_t mypid;

  // Capturando o pid do processo pai com a função GETPID()
  mypid = getpid();

  // Realizando o FORK() para gerar um processo filho
  childpid = fork();

    // Verificando a chamada do FORK()
  if (childpid == -1)
  {
    // Caso assuma o valor -1, ocorreu um erro na inicialização do processo
    perror("Failed to fork");
    return 1;
  }

  // Verificando se o processo filho foi criado corretamente
  if (childpid == 0)
  {
    // Printaremos o PID do processo filho
    printf("I am child %ld, ID = %ld\n", (long)getpid(), (long)mypid);
  }
  // Printaremos o PID do processo pai
  else
  {
    printf("I am parent %ld, ID = %ld\n", (long)getpid(), (long)mypid);
  }

  // Return 0
  return 0;
}
