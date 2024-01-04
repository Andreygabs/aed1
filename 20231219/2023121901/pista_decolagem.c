#include <stdio.h>
#include "pista_decolagem.h"

void inicializar_pista(PistaDecolagem *pista) {
    pista->tamanho_fila = 0;
}

int listar_avioes_aguardando(PistaDecolagem *pista) {
    return pista->tamanho_fila;
}

Aviao autorizar_decolagem(PistaDecolagem *pista) {
    Aviao aviao_vazio = {"", 0};  // Avião vazio para indicar nenhum avião na fila

    if (pista->tamanho_fila > 0) {
        Aviao aviao_decolando = pista->fila_decolagem[0];
        for (int i = 1; i < pista->tamanho_fila; i++) {
            pista->fila_decolagem[i - 1] = pista->fila_decolagem[i];
        }
        pista->tamanho_fila--;
        return aviao_decolando;
    } else {
        return aviao_vazio;
    }
}

void adicionar_aviao_espera(PistaDecolagem *pista, Aviao aviao) {
    if (pista->tamanho_fila < 100) {
        pista->fila_decolagem[pista->tamanho_fila++] = aviao;
    } else {
        printf("A fila de decolagem está cheia. Não é possível adicionar mais aviões.\n");
    }
}

void listar_avioes_espera(PistaDecolagem *pista) {
    printf("Lista de aviões na fila de espera:\n");
    for (int i = 0; i < pista->tamanho_fila; i++) {
        printf("Avião %s - ID: %d\n", pista->fila_decolagem[i].nome, pista->fila_decolagem[i].identificador);
    }
}

void listar_caracteristicas_primeiro_aviao(PistaDecolagem *pista) {
    if (pista->tamanho_fila > 0) {
        Aviao primeiro_aviao = pista->fila_decolagem[0];
        printf("Características do primeiro avião:\n");
        printf("Nome: %s\n", primeiro_aviao.nome);
        printf("ID: %d\n", primeiro_aviao.identificador);
        // Adicione outras características conforme necessário
    } else {
        printf("Nenhum avião na fila para decolagem.\n");
    }
}
