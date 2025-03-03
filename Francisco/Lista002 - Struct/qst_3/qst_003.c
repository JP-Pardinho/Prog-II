/* 3. Programe uma função para calcular a idade do paciente mais velho.
Cadastre 10 pacientes e exiba o nome e a idade do mais velho.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int idade;
}paciente ; // Declaração da variável

void pacienteMaisVelho (paciente *P)
{
    int i=0;
    int maior = 0, menor = 0, aux; 
    char velho[30], novo[30];
    menor = P[i].idade;

    for(i=0; i<10; i++)
    {   
        if(P[i].idade <= menor)
        {
            aux = P[i].idade;
            menor = aux;
            strcpy(novo, P[i].nome);
        }
        if (maior < P[i].idade)
        {
            aux = P[i].idade;
            maior = aux;
            strcpy(velho, P[i].nome);
        }

        printf("\n");
        printf("Paciente mais velho: \n");
        printf("Nome: %s\n", velho);
        printf("Idade: %d\n", maior);
        printf("\n");
        printf("Paciente mais novo: \n");
        printf("Nome: %s\n", novo);
        printf("Idade: %d\n", menor);
        
    }
}

int main() {
    
    paciente Pacientes[10];
    char NOME[30];
    int i = 0;


    for (i=0; i<10; i++)
    {
        printf("Digite os dados do %dº paciente: \n", (i + 1));
        printf("Nome: ");
        scanf("%s", NOME);
        strcpy(Pacientes[i].nome, NOME);
        printf("Idade: ");
        scanf("%d", &Pacientes[i].idade);
    }

    pacienteMaisVelho(Pacientes);
    printf("\n");

    return 0;
}