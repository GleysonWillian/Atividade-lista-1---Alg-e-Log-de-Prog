#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float A, B, C;
    float delta;
    float x1, x2;

    printf("Digite o valor de A: \n");
    scanf("%f", &A);

    getchar();

    printf("Digite o valor de B: \n");
    scanf("%f", &B);

    getchar();

    printf("Digite o valor de C: \n");
    scanf("%f", &C);

    if (A == 0)
    {
        printf("Nao e uma equacao do segundo grau. \n");
    }
    else
    {
        delta = B * B - 4 * A * C;

        if (delta > 0)
        {
            x1 = (-B + sqrt(delta)) / (2 * A);
            x2 = (-B - sqrt(delta)) / (2 * A);

            printf("\nOs valores das raizes sao de x1 = %.0f e x2 = %.0f \n", x1, x2);
        }
        else if (delta == 0)
        {
            x1 = -B / (2 * A);
            printf("\nOs valores de x1 e x2 sao iguais pois possuem apenas uma raiz real. Entao x1 = x2 = %.0f \n", x1);
        }
        else
        {
            printf("\nNao existe raiz real de numero negativo.\n");
        }
    }
    return 0;
}
