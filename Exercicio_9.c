#include <stdio.h>

int main()
{
    int n, hora = 0, min = 0, seg = 0;

    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &n);

    hora = (n / 3600);
    min = (n % 3600) / 60;
    seg = (n % 3600) % 60;

    if (n > 3600)
    {
        printf("\nO valor da conversao temporal e de %d hora %d min e %d seg", hora, min, seg);
    }
    else
    {
        printf("\nO valor da conversao temporal e de %d min e %d seg", min, seg);
    }
    return 0;
}