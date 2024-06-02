#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Atribuindo valores aos campos

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //solicitando inserçoes via teclado

    printf("\nInsira a sua idade: \n");
    scanf("%d", &pes.idade);
    printf("Insira o seu peso: \n");
    scanf("%f", &pes.peso);
    printf("Insira o seu nome: \n");
    scanf("%s", &pes.nome);

    printf("Alterando os dados com a sua irfomação: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %f\n", pes.peso);
    printf("pes.nome: %s", pes.nome);
}