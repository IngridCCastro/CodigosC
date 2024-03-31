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

// Protótipo da função para calcular a variância
float variancia(int n, float* v, float media) {
    float soma = 0.0f;

    for (int i = 0; i < n; i++) {
        soma += (v[i] - media) * (v[i] - media);
    }

    return soma / n; 
}

int main(void) {
    float v[10];
    float med = 0.0f;
    float var = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    med = media(10, v);
    var = variancia(10, v, med);

    printf("Média: %.2f e Variância: %.2f", med, var);
    return 0;
}
