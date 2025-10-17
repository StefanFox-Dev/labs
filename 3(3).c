#include <stdio.h>

int main() {
    double a = 1.0;

    for (int i = 1; i <= 9; i++) {
        a *= (i + i / 10.0);
    }

    printf("%lf", a);
    return 0;
}
