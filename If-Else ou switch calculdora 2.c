#include <stdio.h>
#include <stdlib.h>



int main() {
		int op;
	float num1,num2;
printf("1. Somar 2 valores\n");
	printf("2. Subtrair 2 valores\n");
		printf("3. Multiplicar 2 valores\n");
			printf("4. Dividir 2 valores\n");
				scanf("%i",&op);
				scanf("%f %f",&num1,&num2);
				
				switch (op){
					case 1: printf("Somar %.2f + %.2f = %.2f\n",num1,num2,num1+num2);
					break;
					case 2: printf("Subtrair %.2f - %.2f = %.2f\n",num1,num2,num1-num2);
					break;
					case 3: printf("Multiplicar %.2f * %.2f = %.2f\n",num1,num2,num1*num2);
					break;
					case 4: printf("Dividir %.2f / %.2f = %.2f\n",num1,num2,num1/num2);
					break;	
	
				}
	return 0;
}
