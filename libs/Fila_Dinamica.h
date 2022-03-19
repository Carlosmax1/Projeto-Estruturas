#include "NO_Fila.h"

//Estrutura da fila
typedef struct sFila{

    NOf *inicio;
    NOf *fim;

}Fila;

//inicia a fila
void iniciar_fila(Fila *ptrF){

    ptrF->inicio = NULL;
    ptrF->fim = NULL;
}

//verificar lista vazia
int fila_vazia(Fila *ptrF){

    if(ptrF->fim == NULL || ptrF->inicio == NULL){
        return 1;
    }else{
    return 0;
    }
}

//enfileirar na fila
void enfileirar(Fila *ptr, ComandoF *elem){

    NOf* novo;
    novo = alocarNO();

    if(novo != NULL){
        novo->info = *elem;
        novo->prox = NULL;
        if(fila_vazia(ptr)){
            ptr->inicio = novo;
        }else{
            ptr->fim->prox = novo;
        }
        ptr->fim = novo;
    }else{
        printf("Erro na alocacao.\n");
    }
}

//exibir fila na forma não clássica
void exibirnaoclassica(Fila *ptr){

    if(!fila_vazia(ptr)){

        NOf* aux;
        aux = ptr->inicio;

        printf("\nOs comandos ecolhidos foram: ");
        do{
            printf("%d-%d, ", aux->info.comando, aux->info.repeticoes);
            aux = aux ->prox;
            printf("\n");
        }while(aux != NULL);
    }else{
        printf("Erro fila vazia.\n");
    }
}

//exibir fila na forma classica
/*
void ExecutarClassica(Fila *ptr){

    if(!fila_vazia(ptr)){
        
        NO* aux;

        do{
            
            aux = ptr->inicio;
            ptr->inicio = (ptr->inicio)->prox;

            printf("%d ", aux->info);
            getchar();

            free(aux);

            printf("\n");

        }while(aux != NULL);

    }else{

        printf("Erro fila vazia.\n");
    }
}
*/