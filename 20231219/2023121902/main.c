#include <stdio.h>
#include "hangar.h"

int main() {
    Hangar hangar;
    inicializar_hangar(&hangar);

    Aviao aviao1 = {"Aviao1", 1};
    Aviao aviao2 = {"Aviao2", 2};
    Aviao aviao3 = {"Aviao3", 3};
    Aviao aviao4 = {"Aviao4", 4};

    adicionar_aviao(&hangar, aviao1);
    adicionar_aviao(&hangar, aviao2);
    adicionar_aviao(&hangar, aviao3);

  
    printf("Número de aviões aguardando: %d\n", listar_avioes_aguardando(&hangar));
    listar_caracteristicas_primeiro_aviao(&hangar);

    Aviao aviao_saindo = tirar_aviao(&hangar);
    if (aviao_saindo.identificador > 0) {
        printf("Avião saindo do hangar: %s\n", aviao_saindo.nome);
    } else {
        printf("Nenhum avião no hangar.\n");
    }

    adicionar_aviao(&hangar, aviao4);

    listar_avioes(&hangar);

    tirar_aviao_posicao(&hangar, 1);

    printf("Número de aviões aguardando: %d\n", listar_avioes_aguardando(&hangar));

    return 0;
}
