#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a, b;

    printf("Digite dois numeros (> 0): \n");
    scanf("%lf %lf", &a, &b);

    printf("%.4lf elevado a %.4lf = %.4lf\n", a, b, pow(a, b));
    return 0;
}
