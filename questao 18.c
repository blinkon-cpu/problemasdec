#include <stdio.h>
#include <stdlib.h>

int main() {
    double kg, gramasPorGato, totalGramas, consumo, resto;

    printf("Digite o peso do saco (em kg): ");
    scanf("%lf", &kg);

    printf("Digite a quantidade diaria por gato (em gramas): ");
    scanf("%lf", &gramasPorGato);

    totalGramas = kg * 1000.0;
    consumo = gramasPorGato * 2.0 * 5.0; // 2 gatos, 5 dias
    resto = totalGramas - consumo;

    printf("Racao restante apos 5 dias = %.2lf g\n", resto);
    return 0;
}
