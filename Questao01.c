#include <stdio.h>

int num=12;
int soma(int n);

int soma(int n){
  if(n == 0){
    return 0;
  }
  else{
    return n + soma(n-3);
  }
}

int main(void){
  printf("%d", soma(num));

  return 0;
}

