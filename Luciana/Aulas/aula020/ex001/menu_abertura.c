#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50];
    float altura;
    int ano;
};

void inserirPessoa (struct pessoa *V, int pos){
    printf("Digite o nome: ");
    scanf("%s", V[pos].nome);
    printf("Digite a altura: ");
    scanf("%f", &(V[pos].altura));
    printf("Digite o ano de nascimento: ");
    scanf("%d", &(V[pos].ano));
}

void listar (struct pessoa *V, int tam) {
    int i;
    for(i=0; i<tam; i++){
        printf("Nome: %s \t altura: %f\n", V[i].altura, V[i].altura);
    }

}

int main() {

    //  TERMINAR DE SOLICITAR O MENU E A ABERTURA 

    return 0;
}