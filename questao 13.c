#include <stdio.h>
#include <stdlib.h>

int main() {
    double pes, polegadas, jardas, milhas;

    printf("Digite a medida em pes: ");
    scanf("%lf", &pes);

    polegadas = pes * 12.0;       // 1 pe = 12 polegadas
    jardas    = pes / 3.0;        // 1 jarda = 3 pes
    milhas    = jardas / 1760.0;  // 1 milha = 1760 jardas

    printf("Polegadas = %.4lf\n", polegadas);
    printf("Jardas = %.4lf\n", jardas);
    printf("Milhas = %.6lf\n", milhas);

    return 0;
}
