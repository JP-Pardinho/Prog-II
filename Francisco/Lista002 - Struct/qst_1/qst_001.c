// 1. Escreva um programa que cadastre 5 pacientes e exiba seus dados ao final.

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int idade;
    float peso;
}paciente ; // Declaração da variável

int main() {
    
    paciente Pacientes[5];
    char NOME[30];
    int i = 0;


    for (i=0; i<5; i++)
    {
        printf("Digite os dados do %dº paciente: \n", (i + 1));
        printf("Nome: ");
        scanf("%s", NOME);
        strcpy(Pacientes[i].nome, NOME);
        printf("Idade: ");
        scanf("%d", &Pacientes[i].idade);
        printf("Peso: ");
        scanf("%f", &Pacientes[i].peso);
    }

    for(i=0; i<5; i++){
        printf("\n\nDados dos pacientes:\n");
        printf("Nome: %s\n", Pacientes[i].nome);
        printf("Idade: %d\n", Pacientes[i].idade);
        printf("Peso: %f\n", Pacientes[i].peso);
    }
    printf("\n");

    return 0;
}