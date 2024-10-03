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
        printf("\nO valor da conversao temporal e de %d hora(s) %d minuto(s) e %d segundo(s)", hora, min, seg);
    }
    else
    {
        printf("\nO valor da conversao temporal e de %d minuto(s) e %d segundo(s9000090)", min, seg);
    }
    return 0;
}