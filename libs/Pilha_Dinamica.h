#include "NO_Pilha.h"

NO* inic_pilha(NO **topo){

    *topo = NULL;
}

int pilha_vazia(NO* ptr){

    if(ptr == NULL){
        return 1;
    }
    return 0;
}

void empilhar(NO **topo, ComandoP elem){

    NO *novo;
    novo = alocarNo();
    if(novo != NULL){
        novo->info = elem;
        novo->prox = *topo;
        *topo = novo;
    }else{
        printf("Erro na alocacao.\n");
    }
}

//desempilhar elem na pilha
void desempilhar(NO** topo){

    if(!pilha_vazia(*topo)){

        NO* aux;
        aux = *topo;
        *topo = aux->prox;

        desalocarNo(aux);
    }else{
        printf("Pilha vazia.\n");
    }
}

//exibir pilha forma não classica
void exibir_pilha(NO* topo){

    if(!pilha_vazia(topo)){

        NO* aux;
        aux = topo;

        printf("\nOs comandos escolhidos foram: ");
        while(aux != NULL){
            printf("%d-%d, ", aux->info.comando, aux->info.repeticoes);
            aux = aux->prox;
        }
    }else{
        printf("Lista vazia.\n");
    }
}