#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <unistd.h>

#define ADDKEY 123

// 1. Crie um código-fonte que utilize fork() e shmget() entre 2 processos (pai e filho). Seu código deve garantir que:
// o processo pai e o processo filho compartilhem uma variável simples (por exemplo, inteiro - valor 1);
// o processo pai imprime o valor inicial dessa variável; em seguida, cria o processo filho e espera-o;
// o processo filho acessa esta variável, realiza uma operação (por exemplo, adição - valor 2, totalizando 3), modificando o valor; em seguida, o processo filho termina;
// o processo pai realiza uma outra operação (por exemplo, multiplicação - valor 4, totalizando 12), modificando novamente o valor, e imprime novamente a variável;
// Essa lógica de execução deve ser garantida no seu código-fonte em C.
int main(void)
{
  // Inicializando o identificador de memória compartilhada
  int shmid;
  // Inicializando e atribuindo o espaço de memória compartilhada
  int size_shmid = 1024;
  // Inicializando e atribuindo o caminho de memória compartilhada
  char *path="./";

  // Verificando se o espaço de memória foi inicializado com sucesso
  if ((shmid = shmget(ftok(path, ADDKEY), size_shmid, IPC_CREAT | IPC_EXCL | SHM_R | SHM_W)) == -1)
  {
    // Mensagem: erro no shmget
    perror("Erro ao realizar o shmget!\n");
    exit(1);
  }

  // Inicializando ponteiro que fará referência ao espaço de memória compartilhada
  int *dado = (int*) shmat(shmid, NULL, 0);
  // Atribuindo o valor inicial zero
  *dado = 0;

  // Verificando se o dado conseguiu se conectar ao espaço de memória compartilhada
  if ((int) *dado == -1)
  {
    // Mensagem: erro ao conectar o dado ao espaço de memória
    perror("Erro ao conectar o dado a memória compartilhada!\n");
    exit(1);
  }
  else
  {
    // Mensagem: shmid da memória compartilhada e dado inicial
    printf("Shmid da memória compartilhada: %d!\n", shmid);
    printf("Variável dado no início: %i\n\n", *dado);

    // Capturando o PID do processo atual
    pid_t pid = getpid();
    // Gerando o processo filho com FORK()
    pid_t child = fork();

    // Verificando se o processo filho foi inicializado com sucesso
    if (child == -1)
    {
      // Mensagem: erro no processo filho
      perror("Falha ao inicializar o processo filho!\n");
      exit(1);
    }
    // Lógica para execução dos processos pai e filho
    else
    {
      // Execução do processo filho
      if (child == 0)
      {
        // Ao finalizar o bloco de código, dado deverá ser igual a 2 (0 + 2 = 2)
        *dado = *dado + 2;
        // Mensagem: processo filho e dado
        printf("Processo filho: %ld | pid: %ld\n", (long)getpid(), (long)pid);
        printf("Variável dado no processo filho: %i\n\n", *dado);
      }
      // Execução do processo pai
      else
      {
        // Processo pai espera a execução do processo filho para ser executado
        wait(NULL);
        // Ao finalizar o bloco de código, dado deverá ser igual a 8 (2 * 4 = 4)
        *dado = *dado * 4;
        // Mensagem: processo pai e dado
        printf("Processo pai: %ld | pid: %ld\n", (long)getpid(), (long)pid);
        printf("Variável dado no processo pai: %i\n\n", *dado);
        // Verificando se o segmento de memória foi excluído com sucesso
        if ((shmctl(shmid, IPC_RMID, NULL)) == -1)
        {
          // Mensagem: erro ao excluir o segmento de memória (shmid)
          perror("Erro ao excluir o segmento de memória!\n\n");
          exit(1);
        }
        else
        {
          // Mensagem: segmento de memória excluído com sucesso
          printf("O segmento de memória compartilhada foi excluído!\n\n");
          exit(1);
        }
      }
    }
  }
}
