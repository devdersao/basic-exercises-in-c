#include <stdio.h>
#include <stdlib.h>



int main() {
	int numero,dig1,dig2,dig3;
	
	printf("Informe uma valor inteiro e positivo de tres digitos:\n");
	scanf("%i",&numero);
	if (numero ==300){
		printf("O numero invertido eh 3");
	}else{
	
	dig1=(numero/100);
	dig2=(numero%100)/10;
	dig3=(numero%100)%10;
	
	printf("O numero invertido eh %i%i%i",dig3,dig2,dig1);
	}
		

	
	
	
	return 0;
}
