#include <stdio.h>

void main() {
    int i, n, k, A[200], B[200];
    
    printf("Введіть n, k: ");
    scanf("%d%d", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    k %= n;

    for (i = 0; i < n; i++) {
        B[(i + k) % n] = A[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}
