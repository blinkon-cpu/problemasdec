#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int nota1, nota2, nota3, resultado, media;
	printf("Digite as suas 3 notas: \n");
	scanf("%d",&nota1);
	scanf("%d",&nota2);
	scanf("%d",&nota3);
	resultado = (nota1 * 1) + (nota2 * 2)  + (nota3 * 2);
	media = resultado / 5;
	printf("Valor da media: %d", media);
	return 0;
}
