#include <stdio.h>

int main(){
    int i, j;
    int m[3][3];
    //int m[3][3] = {{10,20,99},{30,40,77}};

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("m[%d][%d] = %d\t", i, j, m[i][j]);
        }
        printf("\n");        
    }
    

    return 0;
}