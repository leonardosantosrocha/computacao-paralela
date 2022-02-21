#include <stdio.h>

// 13. Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.
void apaga_indice(char string[100], int indice)
{
  // Criando um contador
  int i = 0;

  // Quebra de linha
  printf("\nPalavra inicial\n");

  // Enquanto a string for diferente de '\0'
  while(string[i] != '\0')
  {
    // Printamos o caractere
    printf("%c", string[i]);
    i++;
  }
  
  // Removendo o caractere alvo da string 
  string[indice] = '\0';

  // Enquanto o elemento indice+1 for diferente de '\0'
  while((string[indice+1]) != '\0')
  {
    // String[indice] será o string[indice+1] para pegar o próximo caractere
    string[indice] = string[indice+1];
    indice++;
  }
  
  // Removendo o caractere alvo da string 
  string[indice] = '\0';
  i = 0;

  // Quebra de linha
  printf("\nPalavra final\n");

  // Enquanto a string for diferente de '\0'
  while(string[i] != '\0')
  {
    // Printamos o caractere
    printf("%c", string[i]);
    i++;
  }
}

int main(void) {
  // Definição das variáveis utilizadas na função
  char palavra[100];
  int indice;

  // Entrada da palavra
  printf("Digite a palavra: ");
  fgets(palavra, 100, stdin);

  // Entrada do indice
  printf("Digite o indice a ser substituido: ");
  scanf("%d", &indice);

  // Chamada da função 
  apaga_indice(palavra, indice);
  
  return 0;
}
