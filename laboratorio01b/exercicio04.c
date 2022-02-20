#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 4. Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.
// Faça isto com string de C e de C++
int main(void)
{
    // Definição das variáveis utilizadas na função
    char palavra_1[100];
    char palavra_2[100];

    // Entrada da 1a palavra
    printf("Digite a 1a palavra: ");
    // Utilizando a função gets(), pois o scanf() não lê espaços
    fgets(palavra_1,100,stdin);

    // Entrada da 2a palavra
    printf("Digite a 2a palavra: ");
    // Utilizando a função gets(), pois o scanf() não lê espaços
    fgets(palavra_2,100,stdin);

    // Verificando qual a string é menor
    int compara = strcmp(palavra_1, palavra_2);
    
    // Função strcmp(a, b) compara duas strings
    // Se a segunda string é maior que a primeira: -1
    if (compara < 0)
    {
        printf("\n%s%s", palavra_1, palavra_2);
    }
    // Se as strings são iguais: 0
    else if (compara == 0)
    {
        printf("\nPalavras iguais");
        
    }
    // Se a primeira string é maior que a segunda: 1
    else
    {
        printf("\n%s%s", palavra_2, palavra_1);
    }
    
    return 0;
}
