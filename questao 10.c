#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double n;

    printf("Digite um numero positivo (> 0): ");
    scanf("%lf", &n);

    printf("Quadrado = %.4lf\n", n * n);
    printf("Cubo = %.4lf\n", n * n * n);
    printf("Raiz quadrada = %.4lf\n", sqrt(n));
    printf("Raiz cubica = %.4lf\n", cbrt(n));

    return 0;
}
