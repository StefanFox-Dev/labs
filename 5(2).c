#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int n,i,j;

    printf("Введіть розмір матриці: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Замалий розмір матриці.");
    } else if(n > 20) {
        printf("Завеликий розмір матриці.");
    } else {
        double mat[n][n],mine[n],maxe[n];
        srand(time(NULL));

        printf("Згенерована матриця %dx%d:\n", n, n);
        for (i = 0; i < n; i++) {
            double minr,maxr;

            for (j = 0; j < n; j++) {
                mat[i][j] = (rand()%1000-500) / 10.0;
                printf("%7.1f", mat[i][j]);

                if (j == 0) {
                    minr = mat[i][j];
                    maxr = mat[i][j];
                } else {
                    if (mat[i][j] < minr) minr = mat[i][j];
                    if (mat[i][j] > maxr) maxr = mat[i][j];
                }
            }

            mine[i] = minr; maxe[i] = maxr; printf("\n");
        }

        printf("Мінімальні елементи (x¡) по рядках:\n");
        for (i = 0; i < n; i++) {
            printf("x[%d] = %6.1f\n", i, mine[i]);
        }
        
        printf("\nМаксимальні елементи (y¡) по рядках:\n");
        for (i = 0; i < n; i++) {
            printf("y[%d] = %6.1f\n", i, maxe[i]);
        }

        double res = 0.0;
        for (i = 0; i < n; i++) {
            res += mine[i] * maxe[n-1-i];
        }

        printf("Обчислене значення суми: %.2lf", res);
    }
}
