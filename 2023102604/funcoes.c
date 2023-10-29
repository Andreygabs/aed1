#include "main.h" 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preencher(pessoa*pessoa){
    printf("insira nome :");
    scanf("%s", pessoa->nome);
    printf("insira data de nascimento:");
    scanf("%s", pessoa->dataNascimento);
    printf("insira cpf:");
    scanf("%d", &pessoa->cpf);
    
}
void imprimir(pessoa *pessoa){
    printf("%s", pessoa->nome);
    printf("%s", pessoa->dataNascimento);
    printf("%d", pessoa->cpf);  
}
