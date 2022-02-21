#include <stdio.h>
#include <string.h>

// 14. Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.
void replace(char string[100], int posicao, char caractere)
{
  // Inicializando variáveis utilizadas durante o programa
  char aux1, aux2;
  int i = 0, lenght;

  // Capturando o tamanho da string 
  lenght = strlen(string);
  
  // Quebra de linha
  printf("\nPalavra inicial\n");

  // Enquanto string for diferente de '\0' print os caracteres
  while(string[i] != '\0')
  {
    // Printando os caracteres
    printf("%c", string[i]);
    i++;
  }

  // Auxiliar recebe o valor da posição original
  aux1 = string[posicao];
  // Armazena o novo elemento na posição digitada 
  string[posicao] = caractere;

  // Passando os valores antigos para as posições subsequentes da nova string
  for(i = posicao + 1; i < lenght + 1; i++)
  {
    // Auxiliar2 será a string atual
    aux2 = string[i];
    // Elemento atual da string é o Auxiliar1
    string[i] = aux1;
    // Auxiliar1 é o Auxiliar2
    aux1 = aux2;
  }
  
  // Resetando o contador
  i=0;

  // Quebra de linha
  printf("\nPalavra final\n");
  // Enquanto string for diferente de '\0' print os caracteres
  while (i < lenght)
  {
    // Printando os caracteres
    printf("%c", string[i]);
    i++;
  }
}

int main(void)
{
  // Definição das variáveis utilizadas na função
  char palavra[100];
  int indice;
  char caractere;

  // Entrada da palavra
  printf("Digite a palavra: ");
  fgets(palavra, 100, stdin);

  // Entrada do indice
  printf("Digite o indice a ser substituido: ");
  scanf("%d", &indice);
  getchar();

  // Entrada do caractere 
  printf("Digite o caractere a ser incluido: ");
  scanf("%c", &caractere);

  // Chamada da função 
  replace(palavra, indice, caractere);
}
