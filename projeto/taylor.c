#include <stdio.h>
#include <stdlib.h>

// 1. Crie um programa para calcular a fórmula S(t) = (1/1) + (1/2) + (1/3) + ... + (1/t).
float taylor(int t)
{
    float sum = 0;

    for (float i = 1; i <= t; i++)
    {
        sum = sum + (1/i);
    }

    return sum;
}

int main()
{
    float t = taylor(10);
    printf("%.10f", t);
    printf("\n");
}
