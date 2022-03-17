#include <stdio.h>
#include <stdlib.h>

#define TAM 8;

/* 
  0 = Espaço vazio 
  1 = Player
  2 = X
  3 = Chegada
*/

const int espaco_vazio = 0;
const int player = 1;
const int obstaculo = 2;
const int chegada = 3;

// Cria o tabuleiro dinamicamente colocando 0 em todas as posições
int** criar_tabuleiro(){

    int linhas = TAM;
    int colunas = TAM;
    int **matriz;

    matriz = calloc(linhas, sizeof(int*));

    for(linhas = 0; linhas < TAM linhas++){
      matriz[linhas] = calloc(colunas, sizeof(int));
    }

    return matriz;

}

// Preenche o tabuleiro de acordo com a fase.
void preenche_tabuleiro(int **tabuleiro, int fase){

    int linhas;
    int colunas;

    if(!tabuleiro){
      printf("\nERRO no Tabuleiro");
      return;
    }else{
      tabuleiro[0][0] = player;
      tabuleiro[7][7] = chegada;
      switch(fase){
        case 1:
          tabuleiro[2][1] = obstaculo;
          tabuleiro[2][2] = obstaculo;
          tabuleiro[0][5] = obstaculo;
          tabuleiro[1][5] = obstaculo;
          tabuleiro[5][0] = obstaculo;
          tabuleiro[6][0] = obstaculo;
          tabuleiro[5][6] = obstaculo;
          tabuleiro[5][7] = obstaculo;
        break;

        case 2:
          tabuleiro[2][3] = obstaculo;
          tabuleiro[2][2] = obstaculo;
          tabuleiro[2][4] = obstaculo;
          tabuleiro[1][5] = obstaculo;
          tabuleiro[5][0] = obstaculo;
          tabuleiro[6][0] = obstaculo;
          tabuleiro[5][6] = obstaculo;
          tabuleiro[5][7] = obstaculo;
        break;

        case 3:
          tabuleiro[1][1] = obstaculo;
          tabuleiro[1][2] = obstaculo;
          tabuleiro[1][3] = obstaculo;
          tabuleiro[1][5] = obstaculo;
          tabuleiro[5][0] = obstaculo;
          tabuleiro[6][0] = obstaculo;
          tabuleiro[5][6] = obstaculo;
          tabuleiro[5][7] = obstaculo;
        break;
    }
  }
}

// Imprime o tabuleiro com a fase completa.
void imprime_tabuleiro(int **tabuleiro){

  //system("cls||clear");

    int linhas;
    int colunas;
    int i;
    
    for(linhas = 0; linhas < TAM linhas++){
      for(i = 0; i < TAM i++){
        printf("|---");
      }
      printf("|\n");
      for(colunas = 0; colunas < TAM colunas++){
        printf("|");
        if(tabuleiro[linhas][colunas] == espaco_vazio){
          printf("   ");
        }else if(tabuleiro[linhas][colunas] == player){
          printf(" P ");
        }else if(tabuleiro[linhas][colunas] == obstaculo){
          printf(" X ");
        }else if(tabuleiro[linhas][colunas] == chegada){
          printf(" O ");
        }
      }
      printf("|\n");
    }
    for(i = 0; i < TAM i++){
      printf("|---");
    }
    printf("|\n");

    getchar();
}

void show_fase(int **tabuleiro, int fase){

    preenche_tabuleiro(tabuleiro, fase);

    printf("\t\t\t\t\t\tSentido do player no tabuleiro: [ P > ]\n\n");
    printf("\t\t\t\t\t\tComandos:\n");
    printf("\t\t\t\t\t\t1) X X X\n");
    
    switch(fase){
        case 1:
          printf("Tabuleiro da primeira fase:");
        break;
        
        case 2:
          printf("Tabuleiro da segunda fase:");
        break;
        
        case 3:
          printf("Tabuleiro da terceira fase:");
        break;
    }
    printf("\t\t\t2) X X X \n");
    printf("\t\t\t\t\t\t3) X X X \n");
    printf("\t\t\t\t\t\t4) X X X \n");

    imprime_tabuleiro(tabuleiro);

    desalocar_tabuleiro(tabuleiro);
}

// Desaloca o tabuleiro criado na memoria.
void desalocar_tabuleiro(int **tabuleiro){
  
    int linhas;

    for(linhas = 0; linhas < TAM linhas++){
      free(tabuleiro[linhas]);
    }

    free(tabuleiro);
}