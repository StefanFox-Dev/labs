#include <stdio.h>

int main() {
    
    double a;
    
    printf("Обчислення об'єму куба.\nВведіть довжину  ребра (см) і натисніть <Enter>: ");
    scanf("%lf", &a);
    
    if (a < 0)
        printf("Від'ємне число, низя!");
    else
        printf("Об'єм куба: %.2lf", a*a*a);
    
    return 0;
}
