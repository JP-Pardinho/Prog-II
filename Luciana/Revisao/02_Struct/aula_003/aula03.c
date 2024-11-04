#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int matricula;
    float nota;
}tAluno;

int main() {
    tAluno a1;
    tAluno *ptrAluno = &a1;

    a1.matricula = 555;
    a1.nota = 8.0;


}