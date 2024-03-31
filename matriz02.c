#include <stdio.h>
#include <stdlib.h>

void soma(int a[][3], int b[][3], int resultado[][3]);

int main() {
    int a[3][3];
    int b[3][3];
    int resultado[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Preencha a matriz 'A' na posição [%d] [%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Preencha a matriz 'B' na posição [%d] [%d]:  ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    soma(a, b, resultado);

    printf("Resultado da soma das matrizes: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      free(a[i][j]);
      free(b[i][j]);
      free(resultado[i][j]);
    }
  }

    return 0;
}

void soma(int a[][3], int b[][3], int resultado[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
}
