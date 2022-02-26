#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

// 3. Armazenamento do resultado do FORK() em variáveis para processos pais e filhos 
int main(void)
{
  // Inicializando uma variável do tipo pid_t com o valor zero
  pid_t childpid;

  // Utilizando FORK() para gerar um processo filho e armazenar o id na variável childpid
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
    printf("I am child %ld\n", (long)getpid());
  }
  else
  {
    // Printaremos o PID do processo pai
    printf("I am parent %ld\n", (long)getpid());
  }

  // Return 0
  return 0;
}
