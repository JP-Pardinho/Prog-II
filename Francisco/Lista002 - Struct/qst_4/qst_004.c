// 4. Cadastre um número N de pacientes definido pelo usuário e calcule a
// média de idade dos pacientes cadastrados.

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idade;
}Paciente;


Paciente *alocaVetor(int tam);
float valores(Paciente *vet, int tam);

int main () 
{   
    Paciente *pacientes = NULL;
    int tam = 1;
    int i = 0;
    float media = 0;
 
    printf("Deseja cadastar quantos pacientes?");
    scanf("%d", &tam);
    pacientes = alocaVetor(tam);
       
    for(i=0; i<tam; i++){
        printf("Digite a idade do %d paciente: \n", i+1);
        scanf("%d", &pacientes[i].idade);
    }

    media = valores(pacientes, tam);
    printf("Media = %2.f\n", media);
    free(pacientes);

    return 0;
}

Paciente *alocaVetor(int tam)
{
    Paciente *vetPacientes = (Paciente*)malloc(tam * sizeof(Paciente)); 
    if (vetPacientes == NULL){
        printf("Erro ao alocar vetor!");
        exit(1);
    }
    return vetPacientes;
}

float valores(Paciente *vet, int tam)
{
    int i=0;
    float media;
    float soma = 0;

    for(i=0; i<tam; i++){
        soma += vet[i].idade;
    }

    media = soma/tam;
    return media;
}
