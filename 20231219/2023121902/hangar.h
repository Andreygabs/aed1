#ifndef HANGAR_H
#define HANGAR_H

typedef struct {
    char nome[50];
    int identificador;
    // Adicione outras características conforme necessário
} Aviao;

typedef struct {
    Aviao alameda[100];
    int topo;
} Hangar;

void inicializar_hangar(Hangar *hangar);
int listar_avioes_aguardando(Hangar *hangar);
Aviao tirar_aviao(Hangar *hangar);
void adicionar_aviao(Hangar *hangar, Aviao aviao);
void listar_avioes(Hangar *hangar);
void listar_caracteristicas_primeiro_aviao(Hangar *hangar);
void tirar_aviao_posicao(Hangar *hangar, int posicao);

#endif
