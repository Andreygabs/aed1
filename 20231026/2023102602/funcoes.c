#include "main.h" 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preencher(pessoa*pessoa, data*data){
    printf("insira nome :");
    scanf("%s", pessoa->nome);
    printf("insira data de nascimento:");
    scanf("%s", pessoa->dataNascimento);
    printf("insira cpf:");
    scanf("%d", &pessoa->cpf);
    printf("insira o dia de hoje:");
    scanf("%d", &data->dia);
    printf("insira o mes atual:");
    scanf("%d", &data->mes);
    printf("insira o ano atual:");
    scanf("%d", &data->ano);
    
}
void imprimir(pessoa *pessoa, data*data){
    printf("%s", pessoa->nome);
    printf("%s", pessoa->dataNascimento);
    printf("%d", pessoa->cpf);  
    printf("%d", data->dia);
    printf("%d", data->mes);
    printf("%d", data->ano);
}