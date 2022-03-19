#include <stdio.h>
#include <stdlib.h>

//Estrutura comando e repetições
typedef struct sComandoP{

    int comando;
    int repeticoes;

}ComandoP;

typedef struct sNO{
    
    ComandoP info;
    struct sNO *prox;

}NO;

//iniciar pilha
NO* iniciar_pilha(NO **topo){

    *topo = NULL;
}

//alocar no
NO* alocarNo(){

    return (NO*) malloc (sizeof(NO));
}

//desalocar no
void desalocarNo(NO *p){

    free(p);
}