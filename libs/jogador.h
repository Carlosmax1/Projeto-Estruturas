#include <stdlib.h>
#include <stdio.h>

/* 
    Pisição 1 e 2 inicial sempre = 0
    Direção:
        1 = Direita
        2 = Baixo
        3 = Esquerda
        4 = Cima
    
*/

typedef struct sPlayer{

    int pos1;
    int pos2;
    int direcao;

}Player;