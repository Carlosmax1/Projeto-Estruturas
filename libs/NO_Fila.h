#include <stdio.h>
#include <stdlib.h>

//Estrutura comando e repetições
typedef struct sComandoF{

    int comando;
    int repeticoes;

}ComandoF;

//Estrutura do nó
typedef struct sNo{

    ComandoF info;
    struct sNo *prox;

}NOf;

//alocar no
NOf* alocarNO(){

    return (NOf*) malloc (sizeof(NOf));
}

//desalocar no
void desalocarNO(NOf *q){

    free(q);
}