#include <stdio.h>
#include <stdlib.h>

int main() {

    char T[3][3];
    int i, j, linha, coluna;
    char jogador = 'x';
    int jogada = 0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            T[i][j] = '-';
            printf("%c ", T[i][j]);
        }
        printf("\n");
    }

    for(jogada=1; jogada<=9; jogada++){

        do {
            printf("Digite a linha e a coluna: ");
            scanf("%d%d", &linha, &coluna);
        } while(T[linha][coluna] != '-');
    
        T[linha][coluna] = jogador;

        if (jogada >= 5){
            for(j=0; j<3; j++){
                if(T[linha][j] != jogador)
                    break;
            }

            if(j == 3){
                printf("jogador %c venceu.\n", jogador);
            }

            for(i=0; i<3; i++){
                if(T[i][coluna] != jogador)
                    break;
            }

            if(i == 3){
                printf("Jogador %c venceu.\n", jogador);
                break;
            }

            if((linha - coluna) == 0){
                for(i=0; i<3; i++){
                    if(T[i][i] != jogador)
                        break;
                }
            
                if(i == 3){
                    printf("Jogador %c venceu.\n", jogador);
                    break;
                }
            }

            if(linha + coluna == 2){
                for(i=0; i<3; i++){
                    if(T[i][2-i] != jogador)
                        break;
                }
            
                if(i == 3){
                    printf("Jogador %c venceu.\n", jogador);
                    break;
                }
            }
        }
    
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf("%c ", T[i][j]);
            }
            printf("\n");
        }

        if(jogador == 'x') 
            jogador = 'o';
        else 
            jogador = 'x';
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%c ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}