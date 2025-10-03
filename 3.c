#include <stdio.h>
#include <math.h>

int main() {

    double x, a, e, sum=0.0, term=1.0;
    int k, n;

    printf("Введіть дійсні величини x, a, e: ");
    scanf("%lf%lf%lf", &x, &a, &e);

    while (fabs(term) >= e) {
        sum += term;
        n++;
        k++;
        term = term / ((a + x) * k);
    }

    printf("Сума = %lf\n", sum);
    printf("Кількість врахованих доданків = %d\n", n);
    return 0;
}
