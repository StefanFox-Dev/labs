#include <stdio.h>

int main() {
    
    double a, b, c, d;

    printf("Утворити прямокутник.\nВведіть чотири цифри: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if (a == 0 || b == 0 || c == 0 || d == 0) {
        printf("Ділити на нуль не можна.\n");
    } else {
        if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) {
            printf("Співвідношення рівні.\n");
        } else {
            printf("Співвідношення не рівні.\n");
        }
    }
    return 0;
}
