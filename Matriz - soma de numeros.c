#include<stdio.h>
#include<stdlib.h>
int main (){
	int Vetor[3][3],i,contador=0;
	for(i=0;i<3;i++){
		for(contador=0;contador<3;contador++){
			scanf("%i",&Vetor[i][contador]);
		}
	}
				for(i=0;i<3;i++){
				for(contador=0;contador<3;contador++){
				printf("%i ",Vetor[i][contador]);
			}
				printf("\n");
			}
	
	return 0;
}
