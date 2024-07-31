#include <stdio.h>

/*
Cada lesma é classificada em um nível dependendo de sua velocidade:

Nível 1: Se a velocidade é menor que 10 cm/h .
Nível 2: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h .
Nível 3: Se a velocidade é maior ou igual a 20 cm/h .

Sua tarefa é identificar qual nível de velocidade da lesma mais veloz de um grupo de lesmas.

Entrada
A entrada consiste de múltiplos casos de teste, e cada um consiste em duas linhas: A primeira linha contém um inteiro L (1 ≤ L ≤ 500) representando o número de lesmas do grupo, e a segunda linha contém L inteiros Vi (1 ≤ Vi ≤ 50) representando as velocidades de cada lesma do grupo.

A entrada termina com o fim do arquivo (EOF).

*/

int main() {

    int L, N, i;
    int n1 = 0, n2 = 0, n3 = 0;

    scanf("%d", &L);
    
    for (i = 0; i < L; i++) {
        scanf("%d", &N);
        
        if (N < 10) {
            n1 += 1;
        }
        else if (N < 20) {
            n2 += 1;
            n1 = 0;
        }
        else if (N >= 20) {
            n3 += 1;
            n1 = 0;
            n2 = 0;
        }
    }

    if (n1 > n2 && n1 > n3) {
        printf("1\n");
    }
    else if (n2 > n1 && n2 > n3) {
        printf("2\n");
    }
    else {
        printf("3\n");
    }

    return 0;
}