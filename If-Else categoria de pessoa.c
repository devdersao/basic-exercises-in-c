#include <stdio.h>
#include <stdlib.h>


int main() {
	int idade;
	scanf("%i",&idade);
	if(idade<=12){
	printf("Crianca");
		return 0;
		
	}if(idade>12 && idade <18){
		
	printf("Adolescente");
			return 0;
	}if(idade>=18){
		
	printf("Adulto");
		return 0;
	}
	

	return 0;
}
