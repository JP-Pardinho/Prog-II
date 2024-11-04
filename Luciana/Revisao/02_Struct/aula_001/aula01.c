#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ficha_aluno {
    char nome[40];
    int matricula;
    float nota;
} A;

int main(){
    struct ficha_aluno aluno;
    
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);


    printf("Matricula: ");
    scanf("%d", &aluno.matricula);

    printf("Nota: ");
    scanf("%f", &aluno.nota);

    printf("\nNome.......: %s", aluno.nome);
    printf("Matricula....: %d\n", aluno.matricula);
    printf("Nota.........: %f\n", aluno.nota);

    return 0;
}