#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b,c,resultado;
	printf("Digite 3 valores\n");
	scanf("%i %i %i",&a,&b,&c);
	resultado = a + b + c;
	printf("O resultado da soma de %i + %i + %i = %i",a,b,c,resultado);
	
	return 0;
}
