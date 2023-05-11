#include <stdio.h>
#include <stdlib.h>



int main() {
int n1,n2;
printf("Digite 2 valores:\n");
scanf("%i %i",&n1,&n2);
if(n2>n1){
	printf("O maior eh: %i\n",n2);

}
if(n1>n2){
	printf("O maior eh: %i",n1);
}
if(n1==n2){
	printf("Numeros iguais!");
}
}

