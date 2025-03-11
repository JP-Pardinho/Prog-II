#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    float peso;
    int idade;
}Paciente;

void verifica_paciente(Paciente *pacientes, char *nome){
    int i = 0;
    for(i=0; i<2; i++){
        if(strcmp(pacientes[i].nome, nome) == 0){
            printf("\nAtualize o peso: ");
            scanf("%f", &pacientes[i].peso);
            printf("Atualize a idade: ");
            scanf("%d", &pacientes[i].idade);
        }    
    } 
    printf("\nPaciente não encontrado!\n");
}

int main() {
    int i = 0, op;
    char nome[50];

    Paciente pacientes[5];
    
    do{
        printf("\n1 - Cadastrar paciente\n");
        printf("2 - Atualizar dados\n");
        printf("3 - SAIR\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            for(i=0; i<2; i++){
                printf("Nome: ");
                scanf("%s", pacientes[i].nome);
                printf("Peso: ");
                scanf("%f", &pacientes[i].peso);
                printf("Idade: ");
                scanf("%d", &pacientes[i].idade);
            }
        break;

        case 2:
            printf("\nNome do paciente que deseja buscar: ");
            scanf("%s", nome);
            verifica_paciente(pacientes, nome);
        break;
        
        case 3:
            for (i=0; i<2; i++){
                printf("Nome: %s\n", pacientes[i].nome);
                printf("Peso: %f\n", pacientes[i].peso);
                printf("Idade: %d\n", pacientes[i].idade);
            }
            printf("Saindo...\n");
            exit(1);
        break;

        default:
            printf("Opção invalida!\n");
            break;
        }
    }while(op !=3);

    return 0;
}