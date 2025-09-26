#include <stdio.h>
#include <math.h>

int main() {
    
    double a, x, sum=0.0, df=1.0, power=1.0;
    int max = 1000;
    double eps = 1e-12;

    printf("Enter a positive number a, x: ");
    scanf("%lf %lf", &a, &x);

    if (x <= -1.0) {
        printf("Error: x must be greater than -1.\n");
        return 1;
    }
    
    

    for (int n = 0; n < max; n++) {
        sum += power / df;
        if (fabs(power / df) < eps) break;
        power *= x;
        df *= (a + n);
    }

    printf("Result: %.12f\n", sum);
    return 0;
}
