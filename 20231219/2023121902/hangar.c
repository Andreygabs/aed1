#include <stdio.h>
#include "hangar.h"

void inicializar_hangar(Hangar *hangar) {
    hangar->topo = -1;
}

int listar_avioes_aguardando(Hangar *hangar) {
    return hangar->topo + 1;
}

Aviao tirar_aviao(Hangar *hangar) {
    Aviao aviao_vazio = {"", 0};  // Avião vazio para indicar nenhum avião no hangar

    if (hangar->topo >= 0) {
        Aviao aviao_saindo = hangar->alameda[hangar->topo];
        hangar->topo--;
        return aviao_saindo;
    } else {
        return aviao_vazio;
    }
}

void adicionar_aviao(Hangar *hangar, Aviao aviao) {
    if (hangar->topo < 99) {
        hangar->topo++;
        hangar->alameda[hangar->topo] = aviao;
    } else {
        printf("O hangar está cheio. Não é possível adicionar mais aviões.\n");
    }
}

void listar_avioes(Hangar *hangar) {
    printf("Lista de aviões no hangar:\n");
    for (int i = 0; i <= hangar->topo; i++) {
        printf("Avião %s - ID: %d\n", hangar->alameda[i].nome, hangar->alameda[i].identificador);
    }
}

void listar_caracteristicas_primeiro_aviao(Hangar *hangar) {
    if (hangar->topo >= 0) {
        Aviao primeiro_aviao = hangar->alameda[hangar->topo];
        printf("Características do primeiro avião:\n");
        printf("Nome: %s\n", primeiro_aviao.nome);
        printf("ID: %d\n", primeiro_aviao.identificador);
        // Adicione outras características conforme necessário
    } else {
        printf("Nenhum avião no hangar.\n");
    }
}

void tirar_aviao_posicao(Hangar *hangar, int posicao) {
    if (posicao >= 1 && posicao <= hangar->topo + 1) {
        for (int i = posicao; i <= hangar->topo; i++) {
            hangar->alameda[i - 1] = hangar->alameda[i];
        }
        hangar->topo--;
    } else {
        printf("Posição inválida.\n");
    }
}
