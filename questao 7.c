#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, grat, imp, receber;

    printf("Digite o salario-base: ");
    scanf("%f", &base);

    grat = 50.0f;
    imp  = base * 0.10f;
    receber = base + grat - imp;

    printf("Salario a receber = %.2f\n", receber);
    return 0;
}
