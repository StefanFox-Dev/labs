#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int n,i,j,elem=0,maxi=0;
    long long maxs=-1;

    printf("Введіть розмір матриці: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Замалий розмір матриці.");
    } else if(n > 20) {
        printf("Завеликий розмір матриці.");
    } else {
        int mat[n][n];
        srand(time(NULL));
        
        printf("Згенерована матриця %dx%d:\n", n, n);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                mat[i][j] = rand()%100-50;
                printf("%5d", mat[i][j]);
            }
            printf("\n");
        }

        for (j = 0; j < n; j++) {
            long long maxisum = 0;
            int minisum = mat[0][j];

            for (i = 0; i < n; i++) {
                int elemsum = mat[i][j];
                maxisum += abs(elemsum);
                if (elemsum < minisum) minisum = elemsum;
            }

            if (maxisum > maxs) {
                maxs = maxisum;
                maxi = j;
                elem = minisum;
            }
        }

        printf("Найбільша сума: %Ld, стовпець з найбільшою сумою модулів: %d, найменший елемент у цьому стовпці: %d", maxs, maxi, elem);
    }
}
