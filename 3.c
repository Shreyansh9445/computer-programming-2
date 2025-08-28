#include <stdio.h>
int main() {
    float g, a, d, n;
    printf("Enter gross salary: ");
    scanf("%f", &g);

    if(g > 10000) {
        a = 0.10 * g;
        d = 0.03 * g;
    } else if(g > 5000) {
        a = 0.07 * g;
        d = 0.02 * g;
    } else {
        a = 0;
        d = 0;
    }

    n = g + a - d;
    printf("Net salary = %.2f\n", n);

    return 0;
}
