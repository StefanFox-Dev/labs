#include <stdio.h>
#include <math.h>

int main() {

    double x, a, e, sum=0.0, f=1.0;
    int k=0, n=0;

    printf("Введіть дійсні величини x, a, e: ");
    scanf("%lf%lf", &x, &a, &e);
    
    if (e <= 0.0 || (int)x <= 0 || (int)a <= 0 ) {
        printf("Менше 0 не можна.\n");
    } else if ((int)e >= 1) {
        printf("Більше 1 не можна.\n");
    } else {

        while (fabs(f) >= e) {
            sum += f;
            n++; k++;
            term = f * (a + x) / k;
        }

        printf("Сума = %.2lf\n", sum);
        printf("Кількість врахованих доданків = %d\n", n);
        printf("Перевірка e^(a+x): %.12f\n", exp(a + x));
    }
    return 0;
}
