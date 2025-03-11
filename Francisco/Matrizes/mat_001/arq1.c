#include <stdio.h>
#include <stdlib.h>

int main (){
    int **mat = NULL;
    int tam;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tam);
    
    mat =(int**)malloc(tam * sizeof(int*));
    if (mat == NULL){
        printf("Alocação deu errado!\n");
    } else {
        for (int i = 0; i < tam; i++)
        {
            mat[i] = (int *)malloc(tam * sizeof(int));
        }
    }

    for(int i = 0; i < tam; i++)
        for (int j = 0; j < tam; j++)
            mat[i][j] = 1;
        
    for(int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    

    for(int i = 0; i < tam; i++)
        free(mat[i]);

    free(mat);
    return 0;
}