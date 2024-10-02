#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome_1[100], nome_2[100], nome_3[100], nome_4[100];
    int idade_1, idade_2, idade_3, idade_4, med;

    printf("Digite o primeiro nome: \n");
    fgets(nome_1, 100, stdin);
    printf("Digite a idade da primeira pessoa: \n");
    scanf("%d", &idade_1);

    getchar();

    printf("Digite o segundo nome: \n");
    fgets(nome_2, 100, stdin);
    printf("Digite a idade da segunda pessoa: \n");
    scanf("%d", &idade_2);

    getchar();

    printf("Digite o terceiro nome: \n");
    fgets(nome_3, 100, stdin);
    printf("Digite a idade da terceira pessoa: \n");
    scanf("%d", &idade_3);

    getchar();

    printf("Digite o quarto nome: \n");
    fgets(nome_4, 100, stdin);
    printf("Digite a idade da quarta pessoa: \n");
    scanf("%d", &idade_4);

    med = (idade_1 + idade_2 + idade_3 + idade_4) / 4;
    printf("\n");
    printf("O resultado da média aritmética das idades é de: %d anos.\n", med);

    return 0;
}