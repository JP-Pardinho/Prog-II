#include <stdio.h>

int main() {

    float num1, num2, resultado;
    int operacao;

    printf("Por favor, insira dois números para realizar a operação desejada.\n");

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\nEscolha a operação desejada:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Digite o número correspondente à operação: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            printf("\nA soma de %.2f e %.2f é: %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("\nA subtração de %.2f e %.2f é: %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("\nA multiplicação de %.2f e %.2f é: %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("\nA divisão de %.2f por %.2f é: %.2f\n", num1, num2, resultado);
            } else {
                printf("\nErro: Divisão por zero não permitida!\n");
            }
            break;
        default:
            printf("\nOperação inválida. Por favor, escolha um número de 1 a 4.\n");
    }

    return 0;
}
