#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b,c;
	c = 180;
	printf("Informe o valor dos 2 angulos:\n");
	scanf("%i %i",&a,&b);
	c = c-a-b;
	printf("O terceiro angulo eh %i",c);
	
	
	return 0;
}
