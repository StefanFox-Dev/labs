#include <stdio.h>

void main() {
    int A[300], B[200], C[300], n, m, k = 0, i, j, r, MAX, resB, resC;
    long long sum = 0;

    printf("Введіть розмір масиву A: ");
    scanf("%d", &n);

    if (n < 0 || n > 300) {
        printf("Не мона. Не менше 0 і не більше 300!");
    } else {
        printf("Введіть %d елементів масиву A: ", n);

        for (i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        printf("Введіть розмір масиву B: ");
        scanf("%d", &m);

        if (m < 0 || m > 200) {
            printf("Не мона. Не менше 0 і не більше 200!");
        } else {
            printf("Введіть %d елементів масиву B: ", m);

            for (j = 0; j < m; j++) {
                scanf("%d", &B[j]);
            }

            for (i = 0; i < n; i++) {
                resB = 0;
                for (j = 0; j < m; j++) {
                    if (A[i] == B[j]) {
                        resB = 1;
                        break;
                    }
                }

                if (resB) {
                    resC = 0;
                    for (r = 0; r < k; r++) {
                        if (A[i] == C[r]) {
                            resC = 1;
                            break;
                        }
                    }

                    if (!resC) {
                        C[k] = A[i];
                        k++;
                    }
                }
            }

            if (k == 0) {
                printf("Перетин порожній.");
            } else {
                MAX = C[0];
                sum = 0;

                printf("\nПеретин масивів: ");
                for (i = 0; i < k; i++) {
                    printf("%d ", C[i]);
                    sum += C[i];
                    if (C[i] > MAX) {
                        MAX = C[i];
                    }
                }

                printf("\nСума елементів: %Ld, максимальний елемент: %d", sum, MAX);
            }
        }
    }
}
