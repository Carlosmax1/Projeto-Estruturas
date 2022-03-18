/*
void comands_fase1(int **tabuleiro, Player *jg, Fila *ptr){

    NO *aux;
    int i, j;

    aux = ptr->inicio;
      ptr->inicio = (ptr->inicio)->prox;
    if(aux->info.comando == 1){
      for(i = 0; i < aux->info.repeticoes; i++){ // 
        system("cls||clear");
        exibir_direcao(jg);
        atualizar_tabuleiro(tabuleiro, jg);
        if(jg->direcao == 1){
          for(j = 0; j < 4; j++){
            if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos2 = jg->pos2 + 1;
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 2){
          for(j = 0; j < 4; j++){
            if(tabuleiro[jg->pos1+1][jg->pos2] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos1 = jg->pos1 + 1;       
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 3){
          for(j = 0; j < 4; j++){
            if(tabuleiro[jg->pos1][jg->pos2-1] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos2 = jg->pos2 - 1;
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 4){
          for(j = 0; j < 4; j++){
            if(tabuleiro[jg->pos1-1][jg->pos2] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos1 = jg->pos1 - 1;
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }
      }

    }else if(aux->info.comando == 2){
      for(i = 0; i < aux->info.repeticoes; i++ ){
        system("cls||clear");
        exibir_direcao(jg);
        atualizar_tabuleiro(tabuleiro, jg);
        if(jg->direcao == 1){
          if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos2 = jg->pos2 + 1;
          }
          jg->direcao = jg->direcao + 1;
          if(tabuleiro[jg->pos1+1][jg->pos2] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos1 = jg->pos1 + 1;
          }
          jg->direcao = jg->direcao +1;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 2){
          if(tabuleiro[jg->pos1+1][jg->pos2] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos1 = jg->pos1 + 1;
          }
          jg->direcao = jg->direcao - 1;
          if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos2 = jg->pos2 + 1;
          }
          jg->direcao = jg->direcao +3;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 3){
          if(tabuleiro[jg->pos1][jg->pos2-1] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos2 = jg->pos2 - 1;
          }
          jg->direcao = jg->direcao - 1;
          if(tabuleiro[jg->pos1+1][jg->pos2] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos1 = jg->pos1 + 1;
          }
          jg->direcao = jg->direcao + 1;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 4){
          if(tabuleiro[jg->pos1-1][jg->pos2] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos1 = jg->pos1 - 1;
          }
          jg->direcao = jg->direcao - 3;
          if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
            tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
            jg->pos2 = jg->pos2 + 1;
          }
          jg->direcao = jg->direcao +3;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }
      }
    }else if(aux->info.comando == 3){
      for(i = 0; i < aux->info.repeticoes; i++ ){
        system("cls||clear");
        exibir_direcao(jg);
        atualizar_tabuleiro(tabuleiro, jg);
        if(jg->direcao == 1){
          jg->direcao = jg->direcao + 3;
          for(j = 0; j < 2; j++){
            if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos2 = jg->pos2 + 1;
            }
          }
          jg->direcao = jg->direcao - 3;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 2){
          jg->direcao = jg->direcao - 1;
          for(j = 0; j < 2; j++){
            if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos2 = jg->pos2 + 1;
            }
          }
          jg->direcao = jg->direcao + 1;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 3){
          jg->direcao = jg->direcao - 1;
          for(j = 0; j < 2; j++){
            if(tabuleiro[jg->pos1+1][jg->pos2] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos1 = jg->pos1 + 1;
            }
          }
          jg->direcao = jg->direcao + 1;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 4){
          jg->direcao = jg->direcao - 1;
          for(j = 0; j < 2; j++){
            if(tabuleiro[jg->pos1][jg->pos2-1] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos2 = jg->pos2 - 1;
            }
          }
          jg->direcao = jg->direcao + 1;
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }
      }
    }else{
      for(i = 0; i < aux->info.repeticoes; i++ ){
        system("cls||clear");
        exibir_direcao(jg);
        atualizar_tabuleiro(tabuleiro, jg);
        if(jg->direcao == 1){
          jg->direcao = jg->direcao + 1;
          for(j = 0; j < 3; j++){
            if(tabuleiro[jg->pos1+1][jg->pos2] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos1 = jg->pos1 + 1;
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 2){
          jg->direcao = jg->direcao - 1;
          for(j = 0; j < 3; j++){
            if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos2 = jg->pos2 + 1;
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 3){
          jg->direcao = jg->direcao + 1;
          for(j = 0; j < 3; j++){
            if(tabuleiro[jg->pos1-1][jg->pos2] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos1 = jg->pos1 - 1;
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }else if(jg->direcao == 4){
          jg->direcao = jg->direcao - 3;
          for(j = 0; j < 3; j++){
            if(tabuleiro[jg->pos1][jg->pos2+1] != obstaculo){
              tabuleiro[jg->pos1][jg->pos2] = espaco_vazio;
              jg->pos2 = jg->pos2 + 1;
            }
          }
          system("cls||clear");
          exibir_direcao(jg);
          atualizar_tabuleiro(tabuleiro, jg);
        }
      }
    }
    free(aux);
}
*/