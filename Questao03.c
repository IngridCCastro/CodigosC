//defina um macro que, ao receber um numero, retorne o modulo dele
#include <stdio.h>
#include <stdlib.h>

#define modulo(x) ((x) < 0 ? -(x) : (x))

int main(){
  int n1;

  printf("Digite um número: ");
  scanf("%d", &n1);

  printf("O módulo de %d é %d", n1, modulo(n1));

  return 0;
}