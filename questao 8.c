#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float base, altura, area;

    printf("Digite a base e a altura: \n");
    scanf("%f %f", &base, &altura);

    area = (base * altura) / 2.0f;

    printf("Area do triangulo = %.2f\n", area);
    return 0;
}

