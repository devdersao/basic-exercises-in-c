#include<stdio.h>
int main (){
	char entrada[150];
	int contador=0,i;
	printf("Informe a frase:\n");
	for(i=0;i<150;i++){
		scanf("%c",&entrada[i]);
		if(entrada[i]=='\n'){
			break;
		}
		if(entrada[i]==' '){
			contador++;
		}
	}
	printf("frase contem %i palavras\n",contador);
	return 0;
}
