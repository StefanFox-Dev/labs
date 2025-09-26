#include <stdio.h>

int main() {
    
    double a, b, c, d;

    printf("Enter four numbers: ");
    
    if (scanf("%lf %lf %lf %lf", &a, &b, &c, &d) != 4) {
        printf("Invalid input. Please enter four numeric values.\n");
        return 1;
    }

    if (a == 0 || b == 0 || c == 0 || d == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    } else {
        if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) {
            printf("The ratios are equal.\n");
        } else {
            printf("The ratios are not equal.\n");
        }
    }

    return 0;
}
