#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
} Paciente;

// Funções 
Paciente *alocaVetor(int tam);
void localiza_nome(Paciente *vet, char *nome, int total);
void limparBuffer();

int main() {
    Paciente *pacientes = NULL;
    int op = -1, contador = 0, tam = 2;
    char nome_pesq[100];

    pacientes = alocaVetor(tam);

    while (op != 0) {
        printf("\nEscolha uma opção:\n");
        printf("1 - Cadastrar pacientes\n");
        printf("2 - Localizar paciente\n");
        printf("0 - SAIR\n");
        printf("Opção: ");
        scanf("%d", &op);
        limparBuffer();  

        switch (op) {
            case 1: {
                int qtd;
                printf("Quantos usuários deseja cadastrar? ");
                scanf("%d", &qtd);
                limparBuffer();

                if (contador + qtd > tam) {
                    tam = (contador + qtd) * 2;
                    pacientes = realloc(pacientes, tam * sizeof(Paciente));
                    if (pacientes == NULL) {
                        printf("Erro na alocação de memória!\n");
                        exit(1);
                    }
                }

                for (int i = 0; i < qtd; i++) {
                    printf("Digite o nome do %dº usuário: ", contador + 1);
                    fgets(pacientes[contador].nome, 100, stdin);
                    pacientes[contador].nome[strcspn(pacientes[contador].nome, "\n")] = '\0'; // Remover '\n'
                    contador++;
                }
                break;
            }
            case 2:
                printf("\n| LOCALIZADOR DE PACIENTES |\n");
                printf("Nome do paciente: ");
                fgets(nome_pesq, 100, stdin);
                nome_pesq[strcspn(nome_pesq, "\n")] = '\0';
                localiza_nome(pacientes, nome_pesq, contador);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    free(pacientes);
    return 0;
}

Paciente *alocaVetor(int tam) {
    Paciente *vetPacientes = (Paciente *)malloc(tam * sizeof(Paciente));
    if (vetPacientes == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }
    return vetPacientes;
}

void localiza_nome(Paciente *vet, char *nome, int total) {
    for (int i = 0; i < total; i++) {
        if (strcmp(vet[i].nome, nome) == 0) {
            printf("O paciente '%s' está no sistema!\n", nome);
            return;
        }
    }
    printf("Paciente não encontrado!\n");
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
