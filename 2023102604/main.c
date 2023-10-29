

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(){
    pessoa*p1 = malloc(sizeof(pessoa));
    preencher(p1);
    imprimir(p1);
}