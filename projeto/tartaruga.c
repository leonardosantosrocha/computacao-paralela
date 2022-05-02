#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// 1. Crie um programa para calcular a fórmula T(n) = (1/1) + (1/2) + (1/3) + ... + (1/n).
double t(int n)
{
    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (1 / (double) i);
    }

    return sum;
}

int main()
{
    // OBS: Ao desenvolver o DAG consideramos somente a função t(int n). 
    // OBS: Visto que com exceção da função t(int n), todos os códigos da função main() são utilizados para medição da performance.
    
    // Tempo inicial
    clock_t begin = clock();

    // Execução da função para calcular T(n)
    double result = t(10);

    // Tempo final
    clock_t end = clock();

    // Tempo de execução
    clock_t delta = end - begin;

    // Somatório e tempo de execução
    printf("T(n): %.10f \n", result);
    printf("Executing time: %lfs \n", ((double)delta)/((CLOCKS_PER_SEC)));
}
