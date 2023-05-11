#include<stdio.h>
int main (){
	int vetor1[10],vetor2[10],i=0,j=0;
	
	for(i=0;i<10;i++){
		scanf("%i",&vetor1[i]);
		vetor2[i]=0;
	}
	for(i=0;i<10;i++){
		for(j=0;j<6;j++){
			if(vetor1[i]==j){
				vetor2[j]++;
				break;
			}	
		}	
	}
	for(i=0;i<6;i++){
		if(vetor2[i]>0){
			printf("%i: %ix\n",i,vetor2[i]);
		}
	}
	return 0;
}
