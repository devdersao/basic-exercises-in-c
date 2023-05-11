#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float resultado,cotacao,valor;
	
	printf("Digite o valor em R$ \n");
	scanf("%f",&valor);
	printf("Digite o valor da cotacao U$\n");
	scanf("%f",&cotacao);
	resultado = valor/cotacao;
	printf("U$: %.2f",resultado);
	
	
	return 0;
}
