#include <stdio.h>
#include <math.h>

int main() {
    double x, a, e, sum = 0.0, term, tk2, tk1, cd;
    int n = 0, k;

    printf("Введіть дійсні величини x, a, e: ");
    scanf("%lf%lf%lf", &x, &a, &e);

    if ((int)e <= 0) {
        printf("точність 'e' має бути > 0\n");
    } else if ((int)(a + x) == 0) {
        printf("ділення на нуль (a + x = 0).\n");
    } else {

        term = 1.0;
        sum += term;
        n++;
        tk2 = term;

        k = 1;
        term = 1.0 / (a + x);

        if (fabs(term) < e) {
            printf("Сума = %.12f\n", sum);
            printf("Кількість врахованих доданків = %d\n", n);
            return 0;
        }

        sum += term;
        n++;
        tk1 = term;
        cd = (a + x) * (a + x);
        
        for (k = 2;; k++) {
            term = tk2 / (cd * k);
            if (fabs(term) < e) {
                break;
            }
            
            sum += term;
            n++;
            tk2 = tk1;
            tk1 = term;
        }

        printf("Сума = %.12f\n", sum);
        printf("Кількість врахованих доданків = %d\n", n);
    }
    return 0;
}
