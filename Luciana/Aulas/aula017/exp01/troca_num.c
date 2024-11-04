#include <stdio.h>

/*
void troca(int a, int b){
    int aux;

    aux = a;
    a = b;
    b = aux;
}

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    troca(x, y);

    printf("valor de x %d valor y %d\n", x, y);
    

    return 0;
}*/

int main(){
    int a = 10, b = 0;
    int *x = &a;

    b = *x;

    printf("%d", b);


    return 0;
}