#include "./libs/tabuleiro.h"

int main (){

    int **tabuleiro;
    Player *jg;
    Fila *f;

    f = (Fila*) malloc (sizeof(Fila));

    iniciar_fila(f);

    jg->pos1 = 0;
    jg->pos2 = 0;
    jg->direcao = 1;

    //Inicio do tabuleiro 1
    system("cls||clear");

    tabuleiro = criar_tabuleiro();

    preenche_tabuleiro(tabuleiro, 1);
    comandos(f, tabuleiro, 1);
    move_player(tabuleiro, jg, f);
    //atualizar_tabuleiro(tabuleiro, jg);
    desalocar_tabuleiro(tabuleiro);

    free(f);

    return 0;
}