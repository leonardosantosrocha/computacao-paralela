#include <stdio.h>

// 9. Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.
void substitui_negativo(int lin, int col)
{
    // Definição das variáveis utilizadas na função
    int atual;

    // Quebra de linha 
    printf("\n");

    // Definição da matriz
    int matriz[lin][col];

    // Percorrendo as linhas da matriz
    for (int i = 0; i < lin; i++)
    {
        // Percorrendo as colunas da matriz
        for (int j = 0; j < col; j++)
        {
            // Entrada do número da posição atual [i][j]
            printf("[%d][%d] = ", i, j);
            scanf("%d", &atual);
            // Número da posição atual [i][j]
            matriz[i][j] = atual;
        }
    }

    // Imprimindo a matriz inicial
    printf("\nMatriz inicial\n");

    // Percorrendo as linhas da matriz
    for (int i = 0; i < lin; i++)
    {
        // Percorrendo as colunas da matriz
        for (int j = 0; j < col; j++)
        {
            // Entrada do número da posição atual [i][j]
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimindo a matriz final
    printf("\nMatriz final\n");

    // Percorrendo as linhas da matriz
    for (int i = 0; i < lin; i++)
    {
        // Percorrendo as colunas da matriz
        for (int j = 0; j < col; j++)
        {
            // Verificando se o valor é negativo
            if (matriz[i][j] < 0)
            {
                // (Número da posição atual * -1) = | numéro da posição atual |
                printf("[%d]", matriz[i][j] * -1);
            }
            else
            {
                // Número da posição atual
                printf("[%d]", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

int main(void)
{
  // Definição das variáveis utilizadas na função
  int lin, col;

  // Entrada da quantidade de linhas
  printf("Digite a quantidade de linhas: ");
  scanf("%d", &lin);

  // Entrada da quantidade de colunas
  printf("Digite a quantidade de colunas: ");
  scanf("%d", &col);

  // Chamada da função void para gerar a matriz com substituição de negativos
  substitui_negativo(lin, col);
  return 0;
}
