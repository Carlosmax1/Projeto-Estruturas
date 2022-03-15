#include <stdio.h>
#include <stdlib.h>

#define TAM 8;

void tabuleiro(){

  system("cls||clear");

  char matriz[8][8];
  int i;
  int j;

  for(i = 0; i < TAM i++){
    for(j = 0; j < TAM j++){
      matriz[i][j] = ' '; 
      if(i == 1 && j == 1){
        matriz[i][j] = 'P';
      }
    }
  }

  for(i = 0; i < TAM i++){
    for(j = 0; j < TAM j++){
      if(matriz[i][j] == ' '){
        printf("|---");
      }else{
        printf("| %c ", matriz[i][j]);
      }
    }
    printf("|");
    printf("\n");
  }
}