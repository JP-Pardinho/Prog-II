#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tp_endereco {
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[40];
    int cep;
};

struct tp_data_nascimento {
    int dia;
    int mes;
    int ano;
};

struct cadastro_cliente{
    char nome_cliente[40];
    int telefone;
    struct tp_endereco endereco;
    struct tp_data_nascimento data_nascimento;
}cad_cliente[2];

int obterInteiro() {
    int valor;
    char ch;

    while (1) {

        if (scanf("%d", &valor) == 1) {
            ch = getchar();
            if (ch == '\n') {
                return valor; 
            } else {
                
                printf("Por favor, digite apenas números inteiros.\n");
                printf("-> ");
                while (getchar() != '\n'); 
            }
        } else {

            printf("Entrada inválida.\n");
            printf("Por favor, digite apenas números inteiros.\n");
            while (getchar() != '\n');
        }
    }
}

int main(){
    int i;

    printf("\n---------------- Cadastro dos Clientes ----------------\n");

    for(i=0; i<2; i++){
        printf("\nNome do cliente: ");
        fgets(cad_cliente[i].nome_cliente, sizeof(cad_cliente[i].nome_cliente), stdin);
        cad_cliente[i].nome_cliente[strcspn(cad_cliente[i].nome_cliente, "\n")] = '\0';

        printf("Numero de telefone: ");
        cad_cliente[i].telefone = obterInteiro();

        printf("Rua: ");
        fgets(cad_cliente[i].endereco.rua, sizeof(cad_cliente[i].endereco.rua), stdin);
        cad_cliente[i].endereco.rua[strcspn(cad_cliente[i].endereco.rua, "\n")] = '\0';

        printf("Numero: ");
        cad_cliente[i].endereco.numero = obterInteiro();

        printf("Bairro: ");
        fgets(cad_cliente[i].endereco.bairro, sizeof(cad_cliente[i].endereco.bairro), stdin);
        cad_cliente[i].endereco.bairro[strcspn(cad_cliente[i].endereco.bairro, "\n")] = '\0';

        printf("Cidade: ");
        fgets(cad_cliente[i].endereco.cidade, sizeof(cad_cliente[i].endereco.cidade), stdin);
        cad_cliente[i].endereco.cidade[strcspn(cad_cliente[i].endereco.cidade, "\n")] = '\0';

        printf("Estado: ");
        fgets(cad_cliente[i].endereco.estado, sizeof(cad_cliente[i].endereco.estado), stdin);
        cad_cliente[i].endereco.estado[strcspn(cad_cliente[i].endereco.estado, "\n")] = '\0';

        printf("CEP: ");
        cad_cliente[i].endereco.cep = obterInteiro();

        printf("Dia do nascimento: ");
        cad_cliente[i].data_nascimento.dia = obterInteiro();

        printf("Mes do nascimento: ");
        cad_cliente[i].data_nascimento.mes = obterInteiro();

        printf("Ano do nascimento: ");
        cad_cliente[i].data_nascimento.ano = obterInteiro();
    }

    printf("\n\n------------------ Dados dos clientes ------------------\n\n");
    
    for(i=0; i<2; i++){
        printf("\nNome do cliente: %s", cad_cliente[i].nome_cliente);
        printf("\nNumero de telefone: %d", cad_cliente[i].telefone);
        printf("\nRua: %s", cad_cliente[i].endereco.rua);
        printf("\nNumero: %d", cad_cliente[i].endereco.numero);
        printf("\nBairro: %s", cad_cliente[i].endereco.bairro);
        printf("\nCidade: %s", cad_cliente[i].endereco.cidade);
        printf("\nEstado: %s", cad_cliente[i].endereco.estado);
        printf("\nCEP: %d", cad_cliente[i].endereco.cep);
        printf("\nDia do nascimento: %d", cad_cliente[i].data_nascimento.dia);
        printf("\nMes do nascimento: %d", cad_cliente[i].data_nascimento.mes);
        printf("\nAno do nascimento: %d", cad_cliente[i].data_nascimento.ano);
    }

    return 0;
}