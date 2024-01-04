#ifndef PISTA_DECOLAGEM_H
#define PISTA_DECOLAGEM_H

typedef struct {
    char nome[50];
    int identificador;
    // Adicione outras características conforme necessário
} Aviao;

typedef struct {
    Aviao fila_decolagem[100];
    int tamanho_fila;
} PistaDecolagem;

void inicializar_pista(PistaDecolagem *pista);
int listar_avioes_aguardando(PistaDecolagem *pista);
Aviao autorizar_decolagem(PistaDecolagem *pista);
void adicionar_aviao_espera(PistaDecolagem *pista, Aviao aviao);
void listar_avioes_espera(PistaDecolagem *pista);
void listar_caracteristicas_primeiro_aviao(PistaDecolagem *pista);

#endif
