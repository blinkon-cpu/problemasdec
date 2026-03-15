#include <stdio.h>
#include <stdlib.h>

int main() {
    double r, area;
    const double PI = 3.141592653589793;

    printf("Digite o raio: ");
    scanf("%lf", &r);

    area = PI * r * r;

    printf("Area do circulo = %.4lf\n", area);
    return 0;
}
