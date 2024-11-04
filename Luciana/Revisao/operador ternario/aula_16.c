#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    (x > y) ? printf("O X: %d é maior que o Y: %d\n", x, y)
            : printf("O Y: %d é maior que o X %d\n", y, x);

    
    return 0;
}

/*
    Operação ternaria:

    (Variavel_01 *operador de comparação* Variavel_02) ? ("Comando" caso seja True) <- Sem o ";"
                                                       : ("Comando" caso seja False);
*/