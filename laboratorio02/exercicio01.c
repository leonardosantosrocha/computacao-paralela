#include <stdio.h>
#include <unistd.h>

// 1. Criação de processo pai e filho
int main (void)
{
printf("I am process %ld\n", (long)getpid());
printf("My parent is %ld\n", (long)getppid());
return 0;
}
