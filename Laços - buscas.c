#include<stdio.h>
int main (){
	int N=0,W=0;

	while(N<=1000000){
		N++;
		scanf("%i",&W);
		if(W==10){
		N-=1;
		printf("%i",N);
		break;
		}
		}
	return 0;
}
