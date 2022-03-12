#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Crie um programa capaz de gerar um arquivo texto ordenado, através da leitura dos dados de um arquivo texto não ordenado. 
// Os arquivos de entrada (input) e saída (output) estão na raiz do diretório computacao-paralela/laboratorio03, assim como o readme com as instruções.
typedef struct
{
  char nome[100];
  int idade;
  float altura;
} Texto;

// Criando a função main
int main(void)
{
  // Criando e inicializando a estrutura
  Texto texto[5];
  for (int i = 0; i < 5; i++)
  {
    strcpy(texto[i].nome, "NULL");
    texto[i].idade = 0;
    texto[i].altura = 0.0;
  }

  // Criando a estrutura auxiliar e controles
  Texto tempo;
  int i;

  // Leitura e armazenamento do arquivo texto na struct
  FILE* arquivo_input = fopen("/home/leonardorocha/Área de Trabalho/input.txt", "r");

  if (arquivo_input == NULL)
  {
    printf("Erro ao abrir o arquivo!");
    system("pause");
  }

  i = 0;

  while (!feof(arquivo_input))
  {
    fscanf(arquivo_input, "%s", texto[i].nome);
    fscanf(arquivo_input, "%d", &texto[i].idade);
    fscanf(arquivo_input, "%f", &texto[i].altura);
    i++;
  }

  fclose(arquivo_input);

  // Printando as informações da struct
  printf("********** Leitura do arquivo texto **********\n\n");

  for (int i = 0; i < 5; i++)
  {
    printf("%s\n", texto[i].nome);
    printf("%d\n", texto[i].idade);
    printf("%.2f\n", texto[i].altura);
  }
  printf("\n\n");

  // Organizando o vetor de estruturas pela altura
  for (int i = 0; i < 5; i++)
  {
    for (int j = i+1; j < 5; j++)
    {
      if (texto[i].altura > texto[j].altura)
      {
        tempo = texto[i];
        texto[i] = texto[j];
        texto[j] = tempo;
      }
    }
  }

  // Printando as informações da struct ordenada
  printf("********** Leitura da struct ordenada **********\n\n");

  for (int i = 0; i < 5; i ++)
  {
    printf("%s\n", texto[i].nome);
    printf("%d\n", texto[i].idade);
    printf("%.2f\n", texto[i].altura);
  }

  // Gravação do arquivo texto
  FILE* arquivo_output = fopen("/home/leonardorocha/Área de Trabalho/output.txt", "w");

  if (arquivo_output == NULL)
  {
    printf("Erro ao abrir o arquivo!");
    system("pause");
  }

  i = 0;

  while (i < sizeof(texto)/sizeof(texto[0]))
  {
    fprintf(arquivo_output, "%s", texto[i].nome);
    fprintf(arquivo_output, "%s", "\n");
    fprintf(arquivo_output, "%d", texto[i].idade);
    fprintf(arquivo_output, "%s", "\n");
    fprintf(arquivo_output, "%.2f", texto[i].altura);
    fprintf(arquivo_output, "%s", "\n");
    i++;
  }

  fclose(arquivo_output);

  // Finalização do programa
  printf("\n\n");
  printf("********** Dados gravados com sucesso **********\n");

  return 0;
}
