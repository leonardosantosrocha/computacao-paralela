#include <stdio.h>

// 2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele.
// Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
// A partir da média, informar o conceito de acordo com a tabela:
// A: Maior ou igual a 9
// B: Maior ou igual a 7.5 e menor que 9
// C: Maior ou igual a 6 e menor que 7.5
// D: Maior ou igual a 4 e menor que 6
// E: Menor que 4
int main(void)
{
    // Definição das variáveis utilizadas na função
    float n1, n2, n3, me;

    // Entrada N1
    printf("Digite a N1: ");
    scanf("%f", &n1);

    // Entrada N2
    printf("Digite a N2: ");
    scanf("%f", &n2);

    // Entrada N3
    printf("Digite a N3: ");
    scanf("%f", &n3);

    // Entrada ME
    printf("Digite a ME: ");
    scanf("%f", &me);

    // Fórmula aplicada para gerar a média
    float ma = (n1 + n2*2 + n3*3 + me) / 7;

    // A: Maior ou igual a 9
    if (ma >= 9)
    {
        printf("\nA");
    }
    // B: Maior ou igual a 7.5 e menor que 9
    else if (ma >= 7.5 && ma < 9)
    {
        printf("\nB");
    }
    // C: Maior ou igual a 6 e menor que 7.5
    else if (ma >= 6 && ma < 7.5)
    {
        printf("\nC");
    }
    // D: Maior ou igual a 4 e menor que 6
    else if (ma >= 4 && ma < 6)
    {
        printf("\nD");
    }
    // E: Menor que 4
    else if (ma < 4)
    {
        printf("\nE");
    }
    
    return 0;
}
