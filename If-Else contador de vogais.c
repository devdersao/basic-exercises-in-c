#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char a,b,c,d,e,f;
	int contador = 0;
	printf("Informe 6 caracteres:\n");
	scanf("%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f);
	
	if(a == 'a' || a== 'e' || a== 'i'|| a== 'o' || a == 'u'){
	contador++;
	
	}
		if(b == 'a' || b== 'e' || b== 'i'|| b== 'o' || b == 'u'){
	contador++;	
	
	}
		if(c == 'a' || c== 'e' || c== 'i'|| c== 'o' || c == 'u'){
	contador++;	
	
	}
		if(d== 'a' || d== 'e' || d== 'i'|| d== 'o' || d== 'u'){
	contador++;	
	
	}
		if(e == 'a' || e== 'e' || e== 'i'|| e== 'o' || e == 'u'){
	contador++;	
	
	}
		if(f== 'a' || f== 'e' || f== 'i'|| f== 'o' || f== 'u'){
	contador++;
	}
	printf("palavra contem %i vogais",contador);
	
	
	return 0;
}
