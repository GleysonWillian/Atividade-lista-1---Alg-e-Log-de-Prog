#include <stdio.h>

int main()
{
    char nome[50];
    int qtd;
    float valor_unit;
    float valor_total;

    printf("Digite o nome do valor: \n");
    fgets(nome, 50, stdin);

    printf("Digite a quantidade em estoque: \n");
    scanf("%d", &qtd);

    printf("Digite o valor do valor unitario do produto: \n");
    scanf("%f", &valor_unit);

    valor_total = qtd * valor_unit;

    printf("\nValor total: %.2f", valor_total);

    return 0;
}