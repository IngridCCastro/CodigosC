#include <stdio.h>
#include <stdlib.h>

// Protótipo da função para calcular a média
float media(int n, float* v) {
    float soma = 0.0f;

  for (int i = 0; i < n; i++) {
        soma += v[i];
    }

  return soma / n;
}

//Prótotipo da função para calcular a variancia

float variancia(int n, float* v, float media){
  float soma = 0.0f;

  for(int i=0; i<n; i++){
      soma += (v[i] - media) * (v[i] - media);
    
  }
  return soma / n;
}

int main(){
  float *v;
  float med = 0.0f;
  float var = 0.0f;
  int n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  v = (float *) malloc(n*sizeof(float));
  if(v==NULL){
    printf("Memória Insuficente");
  }

  for(int i=0; i<n; i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &v[i]);
  }

    med = media(10, v);
    var = variancia(10, v, med);

    printf("Média: %.2f e Variância: %.2f", med, var);

  
    free(v);

    return 0;
  }


