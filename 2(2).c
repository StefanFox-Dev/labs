#include <stdio.h>
#include <math.h>

int main() {
    
    double x, y;
    int n;

    printf("Дано дійсне значення x та ціле значення n (1 <= n <= 4). За введеним значенням и порахувати значення відповідної функції.\nВведіть одне число: ");
    scanf("%lf", &x);
    
    printf("Введіть ціле число n (1,2,3): ");
    scanf("%d", &n);
    
    switch (n) {
        case 1:
            y = pow(x, 2)+2*x-3;
            printf("Значення 1 = %.2f\n", y);
            break;
        case 2:
            y = 3*x-10;
            printf("Значення 2 = %.2f\n", y);
            break;
        case 3:
            y = 1/(fabs(x)+10);
            printf("Значення 3 = %.2f\n", y);
            break;
        default:
            printf("Тільки 1,2,3\n");
            break;
    }
    return 0;
}
