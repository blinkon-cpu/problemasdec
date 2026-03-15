#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int salario, resultado;
	printf("Digite seu salario: \n");
	scanf("%d",&salario);
	resultado = salario * 1.25;
	printf("Valor do novo salario: %d", resultado);
	return 0;
}
