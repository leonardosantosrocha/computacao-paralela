#include <stdio.h>
#include <string.h>

// 1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. 
// Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.
int main(void)
{
  // Definição das variáveis utilizadas na função
    int lin, col, atual;

    // Entrada da quantidade de linhas
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &lin);

    // Entrada da quantidade de colunas
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &col);

    // Validando se o número de linhas é igual ao número de colunas
    while (lin != col)
    {
      // Mensagem de i != j
      printf("\nO número de linhas e colunas devem ser iguais!\n\n");

      // Entrada da quantidade de linhas
      printf("Digite a quantidade de linhas: ");
      scanf("%d", &lin);

      // Entrada da quantidade de colunas
      printf("Digite a quantidade de colunas: ");
      scanf("%d", &col);
    }

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
        printf("[%d][%d]: ", i, j);
        scanf("%d", &atual);
        matriz[i][j] = atual;
      }
    }
    
    // Quebra de linha
    printf("\n");

    // Definindo o número inicial da matriz
    int menor = matriz[0][0];

    // Percorrendo as linhas da matriz
    for (int i = 0; i < lin; i++)
    {
      // Percorrendo as colunas da matriz
      for (int j = 0; j < col; j++)
      {
        // Se [i][j] < inicial (inicialmente [0][0])
        if (matriz[i][j] < menor)
        {
          menor = matriz[i][j];
        }
      }
    }
    
    // Apresentação do menor número da matriz
    printf("Menor número da matriz: %d", menor);

  return 0;
}
