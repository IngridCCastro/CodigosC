#include <stdio.h>
#include <stdlib.h>

void swap_crescente(int *num1, int *num2);

void swap_crescente(int *num1, int *num2){

  if(*num1 > *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
  }
}
int main(){
  int n1, n2;
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  printf("Valores digitados: %d e %d", n1, n2);
  swap_crescente(&n1, &n2); //Faz a troca dos valores
  printf("\nValores trocados: %d e %d", n1, n2);

  return 0;
}