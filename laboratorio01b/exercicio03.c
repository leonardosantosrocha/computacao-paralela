#include <stdio.h>

// 3. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). 
// Este número deve ser sempre ímpar.
// 123456789
//  2345678
//   34567
//    456
//     5
int main(void)
{
    // Definição das variáveis utilizadas na função
    int numero;

    // Entrada do número 
    printf("Digite um número ímpar e positivo: ");
    scanf("%d", &numero);

    // Validando se o número é 
    while ((numero % 2 == 0) || (numero < 0))
    {
      printf("Digite um número ímpar e positivo: ");
      scanf("%d", &numero);
    }

    // Calcular número de linhas da piramide
    // (numero / 2) + 1

    // i iniciará em 0 e executará [(n / 2) + 1] vezes (representante o número central da linha 0)
    for(int i = 0; i <= (numero / 2) + 1; i++)
    {
      // j iniciará no sucessor de i e terminará no (numero - i) excluindo o inicial da linha atual
      for (int j = i + 1; j <= numero - i; j++)
      {
        // Printando 
        printf("%d ", j);
      }

      // Quebra de linha
      printf("\n");

      // j iniciará em 0 até j < 1 printando dois espaços em branco para gerar o formato da piramide
      for (int j = 0; j < i + 1; j++)
      {
        // Printando 
        printf("  ");
      }
    }
    return 0;
}
