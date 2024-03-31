#include <stdio.h>
#include <stdlib.h>

void incr_vetor(int n, int* v) {
    for (int i = 0; i < n; i++) {
        v[i]++;
    }
}

int main(void) {
    int a[] = {1, 3, 5};
    incr_vetor(3, a);

    printf("a[0] = %d\n", a[0]);
    printf("a[1] = %d\n", a[1]);
    printf("a[2] = %d\n", a[2]);

    return 0;
}
