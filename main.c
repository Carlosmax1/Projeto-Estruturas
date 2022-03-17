#include "./libs/tabuleiro.h"

int main (){

    int **tabuleiro;

//Inicio do tabuleiro 1
    system("cls||clear");

    tabuleiro = criar_tabuleiro();

    show_fase(tabuleiro, 1);

//Inicio do tabuleiro 2
    system("cls||clear");

    tabuleiro = criar_tabuleiro();

    show_fase(tabuleiro, 2);

//Inicio do tabuleiro 3
    system("cls||clear");

    tabuleiro = criar_tabuleiro();

    show_fase(tabuleiro, 3);

    return 0;
}