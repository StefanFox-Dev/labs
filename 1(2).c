#include <stdio.h>

int main() {
    
    int t, d;
    double p = 2.3, final_p = 1.84, echo;
    
    printf("Визначення вартості розмови по телефону.\nВведіть вхідні дані:\nТривалість розмови: ");
    scanf("%d", &t);
    printf("День неділі: ");
    scanf("%d", &d);

    if (d > 5 && d < 8) {
        echo = final_p * t;
        printf("Надана знижка 20%%.\nВартість розмови: %.2lf", echo);
    } else if (d > 0 && d < 6) {
        echo = p * t;
        printf("Вартість розмови: %.2lf", echo);
    } else printf("Нек. день тижня.");

    return 0;
}
