#include <stdio.h>
#include "pista_decolagem.h"

int main() {
    PistaDecolagem pista;
    inicializar_pista(&pista);

    Aviao aviao1 = {"Aviao1", 11};
    Aviao aviao2 = {"Aviao2", 22};
    Aviao aviao3 = {"Aviao3", 33};

    adicionar_aviao_espera(&pista, aviao1);
    adicionar_aviao_espera(&pista, aviao2);
    adicionar_aviao_espera(&pista, aviao3);

    printf("Número de aviões aguardando: %d\n", listar_avioes_aguardando(&pista));
    listar_caracteristicas_primeiro_aviao(&pista);

    Aviao aviao_autorizado = autorizar_decolagem(&pista);
    if (aviao_autorizado.identificador > 0) {
        printf("Avião autorizado para decolagem: %s\n", aviao_autorizado.nome);
    } else {
        printf("Nenhum avião na fila para decolagem.\n");
    }

    listar_avioes_espera(&pista);

    return 0;
}
