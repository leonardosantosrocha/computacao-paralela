#include <stdio.h>
#include <string.h>

// 12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.
void retorna_indice(char palavra[100], char caractere)
{
  // Variável auxiliar
  char auxiliar[100];

  // Transcrevendo a palavra pra variável auxiliar 
  for (int i = 0; i < 100; i++)
  {
    /// Auxiliar recebe o caractere atual da palavra
    auxiliar[i] = palavra[i];
  }

  // Quebra de linha
  printf("\n");

  // Percorrendo todas as letras da palavra
  for (int i = 0; i < 100; i++)
  {
    // Se o caractere atual da palavra auxiliar for igual ao caractere alvo
    if (auxiliar[i] == caractere)
    {
      // Printamos o índice
      printf("Índice: %d\n", i);
    }
  }
}

int main(void)
{
  // Definição das variáveis utilizadas na função
  char palavra[100];
  char caractere;

  // Entrada da palavra
  printf("Digite a palavra: ");
  fgets(palavra, 100, stdin);

  // Entrada do caractere
  printf("Digite o caractere a ser buscado: ");
  scanf("%s", &caractere);

  // Função retorna indice
  retorna_indice(palavra, caractere);
  return 0;
}
