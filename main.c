#include "./libs/tabuleiro.h"

int main (){

    int **tabuleiro;
    int op = -1;
    Player *jg;
    Comando c; 
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
    move_player(tabuleiro, jg);
    atualizar_tabuleiro(tabuleiro, jg);
    desalocar_tabuleiro(tabuleiro);

    //Inicio do tabuleiro 2

    // system("cls||clear");

    // tabuleiro = criar_tabuleiro();

    // preenche_tabuleiro(tabuleiro, 2, &player);

    // comandos(f, tabuleiro, 2);

    // desalocar_tabuleiro(tabuleiro);

    // //Inicio do tabuleiro 3

    // system("cls||clear");

    // tabuleiro = criar_tabuleiro();

    // preenche_tabuleiro(tabuleiro, 3, &player);

    // comandos(f, tabuleiro, 3);

    // desalocar_tabuleiro(tabuleiro);

    return 0;
}