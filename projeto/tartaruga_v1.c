#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

long double t(long double n)
{
    long double sum = 0;

    for (long double i = 1; i <= n; i++)
    {
        sum = sum + (1 / (long double) i);
    }

    return sum;
}

int main()
{
    // Execução da função para calcular T(n)
    long double result = t(1000000000000);
    // Somatório e tempo de execução
    printf("T(n): %.10Lf \n", result);
}
