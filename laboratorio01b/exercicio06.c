#include <stdio.h>

// 6. Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.
int main(void) 
{
  // Definição das variáveis utilizadas na função
  int lin, col;

  // Entrada da quantidade de linhas
  printf("Digite a quantidade de linhas da matriz: ");
  scanf("%d", &lin);

  // Entrada da quantidade de colunas
  printf("Digite a quantidade de colunas da matriz: ");
  scanf("%d", &col);

  // Quebra de linha 
  printf("\n");

  // Definição das matrizes (inicial e transposta)
  int matriz[lin][col];
  int matriz_t[col][lin];

  // Percorrendo as linhas da matriz
  for(int i = 0; i < lin; i++)
  {
    // Percorrendo as colunas da matriz
    for(int j = 0; j < col; j++)
    {
      // Entrada do número da posição atual [j][i]
      printf("[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
      // Passando para matriz transposta
      matriz_t[j][i] = matriz[i][j];
    }
  }

  // Quebra linha
  printf("\nMatriz inicial\n");

  // Imprimindo a matriz inicial 
  // Percorrendo as linhas da matriz
  for(int i = 0; i < lin; i++)
  {
    // Percorrendo as colunas da matriz
    for(int j = 0; j < col; j++)
    {
      // Printando a posição [i][j]
      printf("[%d]", matriz[i][j]);
    }
    printf("\n");
  }

  // Quebra linha
  printf("\nMatriz transposta\n");

  // Imprimindo a matriz transposta
  // Percorrendo as linhas da matriz
  for(int i = 0; i < col; i++)
  {
    // Percorrendo as colunas da matriz
    for(int j = 0 ; j < lin; j++)
    {
      // Printando a posição [i][j]
      printf("[%d]", matriz_t[i][j]);
    }
    printf("\n");
  }
  return 0;
}
