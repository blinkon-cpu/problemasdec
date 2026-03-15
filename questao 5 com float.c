#include <stdio.h>

int main()
{
    float salario, porcentagem, aumento, novoSalario;

    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite a porcentagem de aumento: ");
	scanf("%f", &porcentagem);
    aumento = salario * (porcentagem / 100);
    novoSalario = salario + aumento;
    printf("Novo salario: %.2f\n", novoSalario);

    return 0;
}

