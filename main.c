#include "./libs/tabuleiro.h"

int main (){

    int **tabuleiro;
    Player *jg;
    Fila *f;
    Tentativa *t;

    f = (Fila*) malloc (sizeof(Fila));
    jg = (Player*) malloc (sizeof(Player));
    t = (Tentativa*) malloc (sizeof(Tentativa));

    iniciar_fila(f);

    t->fases = 1;
    t->tentativa = 3;

    system("cls||clear");

    while(t->fases < 3){
        jg->pos1 = 0;
        jg->pos2 = 0;
        jg->direcao = 1;
        tabuleiro = criar_tabuleiro();
        preenche_tabuleiro(tabuleiro, t->fases);
        comandos(f, tabuleiro, t->fases);
        Fase1(tabuleiro, jg, f, t);
        desalocar_tabuleiro(tabuleiro);
    }
    
    free(jg);
    free(f);
    free(t);

    return 0;
}