#include <stdio.h>

int main()
{

    float base, altura, area;

    printf("Insira o valor da base do triangulo: \n");
    scanf("%f", &base);

    printf("Insira o valor da altura do triangulo: \n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nO valor da area do triangulo é igual a %.2f", area);

    return 0;
}