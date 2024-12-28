#include <stdio.h>

int main()
{
    float salario_atual, salario_reaj, taxa;

    printf("Digite o valor do salario atual: R$");
    scanf("%f", &salario_atual);
    printf("Qual o percentual do reajuste: ");
    scanf("%f", &taxa);

    salario_reaj = salario_atual + salario_atual * (taxa / 100);

    printf("O novo salario pos reajuste e: R$%.2f\n", salario_reaj);

    return 0;
}