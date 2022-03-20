#include "./libs/tabuleiro.h"

int main (){

    int **tabuleiro;
    Player *jg;
    Fila *f;
    ComandoP c;
    Tentativa *t;
    NO *s;
    int op;

    f = (Fila*) malloc (sizeof(Fila));
    jg = (Player*) malloc (sizeof(Player));
    t = (Tentativa*) malloc (sizeof(Tentativa));

    iniciar_fila(f);

    t->fases = 1;
    t->tentativa = 3;

    system("cls||clear");

    while(t->fases <= 3){
        jg->pos1 = 0;
        jg->pos2 = 0;
        jg->direcao = 1;
        tabuleiro = criar_tabuleiro();
        preenche_tabuleiro(tabuleiro, t->fases);
        if(t->fases == 1){
            comandos_fila(f, tabuleiro, t->fases);
            Fase1(tabuleiro, jg, f, t);
        }else if(t->fases == 2){
            inic_pilha(&s);
            do{

                system("cls||clear");

                show_fase(tabuleiro, t->fases);

                printf("\nEntre com o comando que deseja inserir na pilha: ");
                scanf("%d", &c.comando);
                getchar();

                printf("\nEntre com a quantidade de vezes que voce deseja realizar esse comando: ");
                scanf("%d", &c.repeticoes);
                getchar();

                empilhar(&s, c);

                printf("\nDeseja inserir mais algum comando na pilha? Caso sim, digite '1', caso nao, digite '0': ");
                scanf("%d", &op);
                getchar();

            }while(op != 0);

            Fase2(tabuleiro, jg, s, t);
            free(s);
            s = NULL;

        }else if(t->fases == 3){
            inic_pilha(&s);
            comandos_fila(f, tabuleiro, t->fases);
            Fase3(tabuleiro, jg, f, t);
            getchar();
            do{

                system("cls||clear");

                show_fase(tabuleiro, t->fases);

                printf("\nEntre com o comando que deseja inserir na pilha: ");
                scanf("%d", &c.comando);
                getchar();

                printf("\nEntre com a quantidade de vezes que voce deseja realizar esse comando: ");
                scanf("%d", &c.repeticoes);
                getchar();

                empilhar(&s, c);

                printf("\nDeseja inserir mais algum comando na pilha? Caso sim, digite '1', caso nao, digite '0': ");
                scanf("%d", &op);
                getchar();

            }while(op != 0);
            fase3_2(tabuleiro, jg, s, t);
            free(s);
            s = NULL;
        }
        desalocar_tabuleiro(tabuleiro);
    }
    
    free(jg);
    free(f);
    free(t);

    return 0;
}