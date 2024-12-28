#include <stdio.h>

int main() {
    float salarioMinimo, quantidadeKW, valorKW, valorTotal, valorComDesconto;


    printf("Por favor, informe o valor do salário mínimo atual: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Agora, informe a quantidade de quilowatts consumida pela residência: ");
    scanf("%f", &quantidadeKW);


    valorKW = (salarioMinimo / 8) / 100; 
    valorTotal = valorKW * quantidadeKW; 
    valorComDesconto = valorTotal * 0.85; 

    printf("\nResumo do consumo:\n");
    printf("- Valor de cada quilowatt: R$ %.2f\n", valorKW);
    printf("- Valor total a ser pago: R$ %.2f\n", valorTotal);
    printf("- Valor com desconto de 15%%: R$ %.2f\n", valorComDesconto);

    printf("\nObrigado por utilizar nosso sistema!\n");

    return 0;
}