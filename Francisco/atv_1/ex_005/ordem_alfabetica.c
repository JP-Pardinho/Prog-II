#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome1[80], nome2[80];

    printf("Digite os nomes: ");
    scanf("%s", nome1);
    scanf("%s", nome2);

    if(strcmp(nome1, nome2) < 0){
        printf("Ordem alfabetica: \n");
        printf("%s\n%s\n", nome1, nome2);
    } else{
        printf("Ordem alfabetica: \n");
        printf("%s\n%s\n", nome2, nome1);
    }

    return 0;
}