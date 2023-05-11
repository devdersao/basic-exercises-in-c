#include<stdio.h>
int main(){
	int v[6],contador,quadrado,i=0;
	for(i=0;i<=5;i++){
	scanf("%i",&v[i]);
	}
	
	for(contador=5;contador>=0;contador--){
	quadrado=v[contador]*v[contador];	
	printf("%i ",quadrado);
	}
	return 0;
}
