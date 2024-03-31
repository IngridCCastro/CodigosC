#include <stdio.h>
#include <stdlib.h>
#define linhas 3
#define colunas 3

int main(){

  float** M=(float**) malloc(linhas*sizeof(float*));

  for(int i=0; i<linhas; i++){
    M[i]=(float*) malloc(colunas*sizeof(float));
  }

  for(int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++){
      M[i][j] = i*colunas+j;
    }
  }

  for(int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++){
      printf("Digite o valor da posição [%d][%d]: ", M[i][j]);
      scanf("%f", &M[i][j]);
    }
  }
  return 0;
}