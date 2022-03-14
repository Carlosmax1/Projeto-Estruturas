#include <stdio.h>
#include <stdlib.h>

typedef struct sNO{
  
  char info;
  struct sNO *dir;
  struct sNO *esq;

}NO;