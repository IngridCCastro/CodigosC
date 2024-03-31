#include <stdio.h>
#include <stdlib.h>

#define linhas 3
#define colunas 3

float** cria_matriz(int l, int c, float inicial);
void imprimir_matriz(int l, int c, float** matriz);
void apagar_matriz(int l, float** matriz);

float** somar_matriz(int l, int c, float** mat1, float** mat2);

float** transposta(int l, int c, float** matriz);

void swap(float* A, float* B);

int main(){

  float** A=cria_matriz(linhas,colunas,1.0);
  imprimir_matriz(linhas,colunas,A);
  float** B=cria_matriz(linhas,colunas,2.0);
  imprimir_matriz(linhas,colunas,B);

  float** C=somar_matriz(linhas,colunas,A,B);
  imprimir_matriz(linhas, colunas, C);

  C=transposta(linhas,colunas,C);
  imprimir_matriz(colunas, linhas, C);

  apagar_matriz(linhas,A);
  apagar_matriz(linhas,B);
  apagar_matriz(colunas,C);

  float a=9, b=11;
  swap(&a, &b);
  printf("Trocados: %f %f\n", a, b);

  return 0;
}

float** cria_matriz(int l, int c, float inicial){
  float** matriz=(float**)malloc(l*sizeof(float*));
  for(int i=0; i<l; i++){
    matriz[i]=(float*)malloc(c*sizeof(float));
    for(int j=0;j<c;j++)
      matriz[i][j]=inicial;
  }

  return matriz;
}

void imprimir_matriz(int l, int c, float** matriz){
  // Imprimindo a matriz
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++)
      printf("%8.1f",matriz[i][j]);
    printf("\n");
  }
  printf("\n");
}

void apagar_matriz(int l, float** matriz){
  for(int i=0; i<l;i++){
    free(matriz[i]);
  }
  free(matriz);
}

//Soma das matrizes de tamanho l(linhas) e c(colunas)
float** somar_matriz(int l, int c, float** mat1, float** mat2){
  float** resultado=cria_matriz(l,c,0);
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      resultado[i][j]=mat1[i][j]+mat2[i][j];
    }
  }
  return resultado;
}

float** transposta(int l, int c, float** matriz){
  float** resultado=cria_matriz(c,l,0);
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      resultado[j][i]=matriz[i][j];
    }
  }
  return resultado;
}

//Usando o swap para trocar os valores na matriz
void swap(float* A, float* B){
  float temp=*A;
  *A=*B;
  *B=temp;
}
