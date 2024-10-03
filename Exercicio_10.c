#include <stdio.h>

int main()
{
    float sal_bruto;
    float horas_trab;
    float valor_hora;
    float inss;
    float inss_per;
    float sal_familia;
    float valor_salario_familia;
    float sal_liquido;
    int num_dependentes;

    printf("Digite o numero de horas trabalhadas: \n");
    scanf("%f", &horas_trab);

    printf("Digite o valor recebido por horas de trabalho: \n");
    scanf("%f", &valor_hora);

    printf("Digite o valor (em porcetagem) da contrubuicao do INSS: \n");
    scanf("%f", &inss_per);

    printf("Digite o numero de dependentes (filhos menores de 14 anos): \n");
    scanf("%d", &num_dependentes);

    printf("Digite o valor do salário família por dependente: \n");
    scanf("%f", &valor_salario_familia);

    sal_bruto = horas_trab * valor_hora;
    inss = sal_bruto * (inss_per / 100);
    sal_familia = num_dependentes * valor_salario_familia;
    sal_liquido = sal_bruto + sal_familia - inss;

    printf("\nO valor do salario bruto desse funcionario  e de R$ %.2f \n", sal_bruto);
    printf("\nO valor de contribuicao para o INSS  e de R$ %.2f \n", inss);
    printf("\nO valor do salario familia desse funcionario  e de R$ %.2f \n", sal_familia);
    printf("\nO valor do salario liquido e de R$ %.2f \n", sal_liquido);

    return 0;
}