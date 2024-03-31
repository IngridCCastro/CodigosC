#include <stdio.h>

int main(){
    float x, y;
    int q1=0, q2=0, q3=0, q4=0;

    printf("Digite as coordenadas X e Y. Para encerrar, digite (0 0).\n");

    do {
        printf("Digite as coordenadas X e Y: ");
        scanf("%f %f", &x, &y);

        if(x == 0 && y == 0) {
            break;
        }

        if(x > 0 && y > 0) {
            q1++;
        }
        else if(x < 0 && y > 0) {
            q2++;
        }
        else if(x > 0 && y < 0) {
            q3++;
        }
        else if(x < 0 && y < 0) {
            q4++;
        }

        printf("Quantidade de pontos em cada quadrante:\n");
        printf("Primeiro quadrante: %d\n", q1);
        printf("Segundo quadrante: %d\n", q2);
        printf("Terceiro quadrante: %d\n", q3);
        printf("Quarto quadrante: %d\n", q4);
    } while(x != 0 || y != 0);

    printf("Programa encerrado.\n");

    return 0;
}
