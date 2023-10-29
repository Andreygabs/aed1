#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(){
    pessoa*p1 = malloc(sizeof(pessoa));
    data*p2 = malloc(sizeof(data));
    preencher(p1, p2);
    imprimir(p1, p2);
}