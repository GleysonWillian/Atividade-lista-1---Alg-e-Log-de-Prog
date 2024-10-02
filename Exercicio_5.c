#include <stdio.h>

int main()
{

    int A, B, quad;

    printf("Digite o valor do numero A: \n");
    scanf("%d", &A);

    printf("Digite o valor do numero B: \n");
    scanf("%d", &B);

    quad = (A ^ 2) + (2 * A * B) - (B ^ 2);

    printf("O valor do quadrado da diferenca e igual a %d.\n", quad);

    return 0;
}
