#include <stdio.h>
#include <stdlib.h>

int main(){

int a[3][3];
int b[3][3];
int resultado[3][3];
  

for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
    printf("Preencha a matriz 'A' na posição %d %d: ", i, j);
    scanf("%d", &a[i][j]);
  }
}

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("Preencha a matriz 'B' na posição %d %d: ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      resultado[i][j] = a[i][j] + b[i][j];
      printf("A soma da matriz 'A' e 'B' é: %d\n", resultado[i][j]);
    }
  }
}