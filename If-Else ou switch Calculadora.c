#include <stdio.h>
#include <stdlib.h>


int main(){
	int op;
printf("1. Somar 2 valores\n");
	printf("2. Subtrair 2 valores\n");
		printf("3. Multiplicar 2 valores\n");
			printf("4. Dividir 2 valores\n");
				scanf("%i",&op);
				
				switch (op){
					case 1: printf("Somar 2 valores\n");
					break;
					case 2: printf("Subtrair 2 valores");
					break;
					case 3: printf("Multiplicar 2 valores");
					break;
					case 4: printf("Dividir 2 valores");
					break;	
	
				}

	return 0;
}

