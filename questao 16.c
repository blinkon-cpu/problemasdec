#include <stdio.h>
#include <stdlib.h>

int main() {
    double horas, salMin, valorHora, bruto, imposto, receber;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%lf", &horas);

    printf("Digite o valor do salario minimo: ");
    scanf("%lf", &salMin);

    valorHora = salMin / 2.0;
    bruto = horas * valorHora;
    imposto = bruto * 0.03;
    receber = bruto - imposto;

    printf("Valor da hora = %.2lf\n", valorHora);
    printf("Salario bruto = %.2lf\n", bruto);
    printf("Imposto = %.2lf\n", imposto);
    printf("Salario a receber = %.2lf\n", receber);

    return 0;
}
