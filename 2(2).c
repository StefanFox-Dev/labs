#include <stdio.h>
#include <math.h>

int main() {
    
    double x, y;
    int n;

    printf("Enter one floating-point numbers: ");
    
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input. Please enter one floating-point number x.\n");
        return 1;
    }
    
    printf("Enter an integer n (1, 2, or 3): ");
    
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer n.\n");
        return 1;
    }

    switch (n) {
        case 1:
            y = pow(x, 2)+2*x-3;
            printf("y = %.2f\n", y);
            break;
        case 2:
            y = 3*x-10;
            printf("y = %.2f\n", y);
            break;
        case 3:
            y = 1/(fabs(x)+10);
            printf("y = %.2f\n", y);
            break;
        default:
            printf("Invalid input. n must be 1, 2, or 3.\n");
            break;
    }
    return 0;
}
