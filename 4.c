#include <stdio.h>

void main() {
    int i, n, k, A[200];
    
    printf("Введіть n, k: ");
    scanf("%d%d", &n, &k);

    printf("Введіть %d елементів масиву: ", n);
    for (i = 0; i < n; i++) scanf("%d", &A[i]);

    k %= n;

    if (k > 0) {
        int count = 0;
        
        for (i = 0; count < n; i++) {
            int ind = i;
            int AA = A[i];

            while (1) {
                int indN = (ind - k + n) % n; 
                count++;
                
                if (indN == i) {
                    A[ind] = AA;
                    break;
                }
                
                A[ind] = A[indN];
                ind = indN;
            }
        }
    }

    printf("\nРезультат зсуву: ");
    for (i = 0; i < n; i++) printf("%d ", A[i]);
}
