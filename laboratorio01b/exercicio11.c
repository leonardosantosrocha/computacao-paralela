#include <stdio.h>
#include <string.h>

// 11. Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. 
// O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.
void soma_ou_multiplica(int lin, int col)
{
  // Definição das variáveis utilizadas na função
  int atual;

  // Definição da matriz
  int matriz[lin][col], matriz_soma[lin][col], matriz_multiplica[lin][col];

  // Quebra de linha 
  printf("\n");

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

  // Quebra de linha 
  printf("\n");

  // Percorrendo as linhas da matriz
  printf("Matriz inicial\n");
  for (int i = 0; i < lin; i++)
  {
    // Percorrendo as colunas da matriz
    for (int j = 0; j < col; j++)
    {
      // Printando [i][j] da matriz
      printf("[%d]", matriz[i][j]);
      // Gravando a informação na matriz de soma 
      matriz_soma[i][j] = matriz[i][j];
      // Gravando a informação na matriz de multiplicação
      matriz_multiplica[i][j] = matriz[i][j];
    }
    printf("\n");
  }

  // Quebra de linha 
  printf("\n");

  // Percorrendo as linhas da matriz de soma 
  for (int i = 0; i < lin; i++)
  {
    // Percorrendo as colunas da matriz de soma 
    for (int j = 0; j < col; j++)
    {
      // Se estiver na segunda linha da matriz de soma 
      if (i == 1)
      {
        // matriz_soma[i][j] = matriz_soma[i][j] + matriz[primeira linha][j] 
        matriz_soma[i][j] = matriz_soma[i][j] + matriz[0][j];
      }
    }
  }
  
  // Percorrendo as linhas da matriz de multiplicação
  for (int i = 0; i < lin; i++)
  {
    // Percorrendo as colunas da matriz de multiplicação
    for (int j = 0; j < col; j++)
    {
      // Se estiver na segunda linha da matriz de multiplicação
      if (i == 1)
      {
        // matriz_multiplica[i][j] = matriz_multiplica[i][j] + matriz[primeira linha][j]
        matriz_multiplica[i][j] = matriz_multiplica[i][j] * matriz[0][j];
      }
    }
  }
  
  // Percorrendo as linhas da matriz de soma 
  printf("Matriz de soma\n");
  for (int i = 0; i < lin; i++)
  {
    // Percorrendo as colunas da matriz de soma
    for (int j = 0; j < col; j++)
    {
      // Printando a matriz principal
      printf("[%d]", matriz_soma[i][j]);
    }
    printf("\n");
  }

  // Quebra de linha 
  printf("\n");

  // Percorrendo as linhas da matriz de multiplicação 
  printf("Matriz de multiplicação\n");
  for (int i = 0; i < lin; i++)
  {
    // Percorrendo as colunas da matriz de multiplicação
    for (int j = 0; j < col; j++)
    {
      // Printando a matriz principal
      printf("[%d]", matriz_multiplica[i][j]);
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

  // Função soma e multiplica matriz
  soma_ou_multiplica(lin, col);
  return 0;
}
