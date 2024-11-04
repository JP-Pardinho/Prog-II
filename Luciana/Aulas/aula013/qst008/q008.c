#include <stdio.h>

int main() {

    int i, j, op = 0, c_linha, c_coluna;
    char c1, c2;
    char cidades[5] = {'a', 'b', 'c', 'd', 'e'};
    float distancias[5][5]= {{1,2,3,4,5},{6,7,8,9,0},{1,2,3,4,5},{6,7,8,9,0},{1,2,3,4,5}};
    
    do {
        printf("(1) Calcular distancias\n");
        printf("(2) Imprimir matriz\n");
        printf("(3) Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &op);

        if (op == 1) {
            printf("Digite o nome das cidades: \n");
            scanf("%c%c" , &c1, &c2);

            if (c1 == cidades[0]){
                c_linha = 0;
            }
            else if (c1 == cidades[1]) {
                c_linha = 1;
            }
            else if (c1 == cidades[2]){
                c_linha = 2;
            }
            else if (c1 == cidades[3]){
                c_linha = 3;
            }
            else if (c1 == cidades[4]) {
                c_linha = 4;
            }

            if (c2 == cidades[0]){
                c_coluna = 0;
            }
            else if (c2 == cidades[1]) {
                c_coluna = 1;
            }
            else if (c2 == cidades[2]){
                c_coluna = 2;
            }
            else if (c2 == cidades[3]){
                c_coluna = 3;
            }
            else if (c2 == cidades[4]) {
                c_coluna = 4;
            }

            printf("\nA distancia entre %c e %c é %.2f\n", c1, c2, distancias[c_linha][c_coluna]);
        } 

        else if (op == 2) {
            for(i = 0; i < 5; i++) {
                for(j = 0; j < 5; j++) {
                    printf(" %.2f ", distancias[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }

        else if (op == 3) {
            break;
        }

        else {
            printf("Opção invalida fdp\n");
        }

    } while (op != 3);

    return 0;
}