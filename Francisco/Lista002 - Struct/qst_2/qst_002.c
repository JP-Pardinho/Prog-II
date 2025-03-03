/* 2. Adicione um campo altura à struct paciente e calcule o IMC de 5
pacientes exibindo se eles estão dentro do peso ideal.
IMC = peso/(altura2). Se o IMC resulta em um valor acima de 24,9 a
pessoa é considerada acima do peso.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int idade;
    float peso;
    float altura;
}paciente ; // Declaração da variável

int main() {
    
    paciente Pacientes[5];
    char NOME[30];
    int i = 0;
    float imc;


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
        printf("Digite sua altura: ");
        scanf("%f", &Pacientes[i].altura);
    }

    for(i=0; i<5; i++){
        printf("\n\nDados dos pacientes:\n");
        printf("Nome: %s\n", Pacientes[i].nome);
        printf("Idade: %d\n", Pacientes[i].idade);
        printf("Peso: %f\n", Pacientes[i].peso);
        printf("Altura: %f\n", Pacientes[i].altura);
        imc = Pacientes[i].peso/(Pacientes[i].altura*Pacientes[i].altura);
        printf("IMC: %f", imc);
    }
    printf("\n");

    return 0;
}