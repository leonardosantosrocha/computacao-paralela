#include <stdio.h>
#include <unistd.h>

// 1. Criação de processo pai e filho
int main (void)
{
  // Mostrando o processo
  printf("I am process %ld\n", (long)getpid());
  
  // Mostrando o processo pai
  printf("My parent is %ld\n", (long)getppid());
  
  // Return 0
  return 0;
}
