#include <stdio.h>

// 10. Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. 
// Faça o mesmo para uma coluna.
void multiplica_linha_coluna(int lin, int col, int lin_alvo, int col_alvo, int multiplicador)
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
            // Verificando se é linha alvo
            if (i == lin_alvo)
            {
              // Número da posição atual [i][j] deve ser multiplicado pelo valor escolhido pelo usuário
              matriz[i][j] = atual * multiplicador;
            }
            else if (j == col_alvo)
            {
              // Número da posição atual [i][j] deve ser multiplicado pelo valor escolhido pelo usuário
              matriz[i][j] = atual * multiplicador;
            }
            else
            {
              // Número da posição atual [i][j] é o atual
              matriz[i][j] = atual;
            }
        }
    }

    // Imprimindo a matriz final
    printf("\nMatriz final\n");

    // Percorrendo as linhas da matriz
    for (int i = 0; i < lin; i++)
    {
        // Percorrendo as colunas da matriz
        for (int j = 0; j < col; j++)
        {
             printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
  // Definição das variáveis utilizadas na função
  int lin, col, lin_alvo, col_alvo, multiplicador;

  // Entrada do multiplicador dos termos
  printf("Digite o termo multiplicador: ");
  scanf("%d", &multiplicador);

  // Entrada da linha alvo
  printf("Digite a linha a ser multiplicada: ");
  scanf("%d", &lin_alvo);

  // Entrada da coluna alvo
  printf("Digite a coluna a ser multiplicada: ");
  scanf("%d", &col_alvo);

  // Entrada da quantidade de linhas
  printf("Digite a quantidade de linhas: ");
  scanf("%d", &lin);

  // Entrada da quantidade de colunas
  printf("Digite a quantidade de colunas: ");
  scanf("%d", &col);

  // Chama da função multiplica linhas e colunas
  multiplica_linha_coluna(lin, col, lin_alvo, col_alvo, multiplicador);
  return 0;
}
