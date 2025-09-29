#include <stdio.h>
#include <math.h>

int main() {
    
    double a, x, sum=0.0, df=1.0, power=1.0;
    int max = 1000;
    double eps = 1e-12;

    printf("Введіть додатне число a, x: ");
    scanf("%lf %lf", &a, &x);

    if ((int)x <= -1) {
        printf("x має бути більше ніж -1.\n");
    } else {
        for (int n = 0; n < max; n++) {
            sum += power / df;
            if (fabs(power / df) < eps) break;
            power *= x;
            df *= (a + n);
        }
    }
    
    printf("Результат: %.12f\n", sum);
    return 0;
}
