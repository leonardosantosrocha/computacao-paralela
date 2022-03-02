#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 5. Criação de multiplos processos filhos com laços
int main (int argc, char *argv[])
{
  // Inicializando a variável "childpid" com o valor zero
  pid_t childpid = 0;
  // Inicializando as variáveis "i" e "n", a segunda com o valor cinco
  int i, n = 5;

  // Utilizando a função argc para verificar a quantidade de argumentos
  if (argc != 2)
  {
    // Printando a mensagem para o usuário
    fprintf(stderr, "Usage: %s processes\n", argv[0]);
    return 1;
  }

  // Utilizando a função atoi para converter argv[1] de string para inteiro
  n = atoi(argv[1]);

  // Criando um laço para gerar "n" processos filhos
  for (i = 1; i < n; i++)
  {
    // Realizando o fork para gerar um novo processo filho
    if (childpid == fork())
    {
      // Pausa
      break;
    }
  }

  // Printando as informações para o usuário
  fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
  i, (long)getpid(), (long)getppid(), (long)childpid);

  // Return 0
  return 0;
}
