#include "./libs/tabuleiro.h"

int main (){

  int **tabuleiro;

  tabuleiro = criar_tabuleiro();

  preenche_tabuleiro(tabuleiro, 1);

  imprime_tabuleiro(tabuleiro);

  desolcar_tabuleiro(tabuleiro);

  return 0;

}