#include "./libs/tabuleiro.h"
#include "./libs/jogador.h"

int main (){

    int **tabuleiro;
    int op = -1;
    Comando c; 
    Fila *f;
    Player player;

    f = (Fila*) malloc (sizeof(Fila));

    iniciar_fila(f);

    //Inicio do tabuleiro 1
    system("cls||clear");

    tabuleiro = criar_tabuleiro();

    preenche_tabuleiro(tabuleiro, 1, &player);

    comandos(f, tabuleiro, 1);
    // move_player(tabuleiro);

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