#include <stdio.h>
#include <stdlib.h>

//Estrutura comando e repetições
typedef struct sComando{

    int comando;
    int repeticoes;

}Comando;

//Estrutura do nó
typedef struct sNo{

    Comando info;
    struct sNo *prox;

}NO;

//alocar no
NO* alocarNO(){

    return (NO*) malloc (sizeof(NO));
}

//desalocar no
void desalocarNO(NO *q){

    free(q);
}