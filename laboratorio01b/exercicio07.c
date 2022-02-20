#include <stdio.h>
#include <string.h>

// 7. Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. 
// O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. 
// A struct deve armazenar os dados de idade, peso e altura.
typedef struct
{
  // Definição do nome
  char nome[50];
  // Defininção da idade
  int idade;
  // Definição do peso
  float peso;
  // Definição da altura
  float altura;
} Pessoa; Pessoa pessoa[10000];

int main(void)
{
  // Inicializando os campos (nome, idade, peso e altura) da estrutura
  for (int i = 0; i < 3; i++)
  {
    // Inicializando o nome
    strcpy(pessoa[i].nome, "NULL");
    // Inicializando a idade 
    pessoa[i].idade = 0;
    // Inicializando o peso 
    pessoa[i].peso = 0.0;
    // Inicializando a altura
    pessoa[i].altura = 0.0;
  }

  // Populando os campos (nome, idade, peso e altura) da estrutura
  for (int i = 0; i < 3; i++)
  {
    // Entrada do nome
    printf("Digite o nome: ");
    scanf("%s%*c", pessoa[i].nome);
    // Entrada da idade
    printf("Digite a idade: ");
    scanf("%d%*c", &pessoa[i].idade);
    // Entrada do peso
    printf("Digite o peso: ");
    scanf("%f%*c", &pessoa[i].peso);
    // Entrada da idade
    printf("Digite a altura: ");
    scanf("%f%*c", &pessoa[i].altura);
    printf("\n");
  }

  // Imprimindo as informações armazenadas
  for (int i = 0; i < 3; i++)
  {
    // Imprimindo o nome
    printf("Nome: %s", pessoa[i].nome);
    // Imprimindo a idade
    printf("\nIdade: %d", pessoa[i].idade);
    // Imprimindo o peso
    printf("\nPeso: %f", pessoa[i].peso);
    // Imprimindo a idade
    printf("\nAltura: %f", pessoa[i].altura);
    printf("\n\n");
  }
}
