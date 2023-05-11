#include<stdio.h>
int main(){
	int vetor1[5],vetor2[5],vetor3[5],i=0,x=0;
	for(i=0;i<6;i++){
		scanf("%i",&vetor1[i]);
		
		}
	for(x=0;x<6;x++){
		scanf("%i",&vetor2[x]);
		vetor3[x]=vetor1[x]-vetor2[x];
	
		}
	for(i=0;i<6;i++){
	printf("%i ",vetor3[i]);
		
	}
	
	
	
	return 0;
}
