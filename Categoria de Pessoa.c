#include <stdio.h>
#include <stdlib.h>



int main() {
		
		int crianca,adolecente,adulto,idade;
		scanf("%i",&idade);
		crianca = (idade>=0 && idade<=12);
		adolecente = (idade>12 && idade<18);
		adulto = (idade>=18);
		printf("Crianca %i Adolescente %i Adulto %i\n",crianca,adolecente,adulto);
		
				return 0;
}
