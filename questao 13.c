#include <stdio.h>
#include <stdlib.h>

int main() {
    float pes, polegadas, jardas, milhas;

    printf("Digite a medida em pes:\n");
    scanf("%f", &pes);

    polegadas = pes * 12;  // 1 pé = 12 polegadas
    jardas    = pes / 3;  // 1 jarda = 3 pés
    milhas = pes / 5280; // 1 milha = 1760 jardas

    printf("Polegadas = %.1f\n", polegadas);
    printf("Jardas = %.1f\n", jardas);
    printf("Milhas = %.2f\n", milhas);

    return 0;
}
