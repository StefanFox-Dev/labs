#include <stdio.h>
#include <math.h>

int main() {

    double x, a, e=1e-12, sum=0.0, term=1.0;
    int k=0, n=0;

    printf("Введіть дійсні величини x, a: ");
    scanf("%lf%lf", &x, &a);
    
    if (e <= 0.0 || (int)x <= 0 || (int)a <= 0 ) {
        printf("Менше 0 не можна.\n");
    } else if ((int)e >= 1) {
        printf("Більше 1 не можна.\n");
    } else {

        while (fabs(term) >= e) {
            sum += term;
            n++; k++;
            term = term * (a + x) / k;
        }

        printf("Сума = %.2lf\n", sum);
        printf("Кількість врахованих доданків = %d\n", n);
        printf("Перевірка e^(a+x): %.12f\n", exp(a + x));
    }
    return 0;
}
