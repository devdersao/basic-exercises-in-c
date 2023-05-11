#include<stdio.h>
int main(){
	int n=1,w;
	while(n!=0){
		n++;
		scanf("%i",&w);
		if(w<=9 && w>=-9){
			printf("O numero contem 1 digitos");
				break;
		}
		if(w>=10 && w<=99){
			printf("O numero contem 2 digitos");
				break;
		}
		if(w>=100 && w<=999){
			printf("O numero contem 3 digitos");
				break;
		}
		if(w>=1000 && w<=9999){
			printf("O numero contem 4 digitos");
				break;
		}
		if(w>=10000 && w<=99999){
			printf("O numero contem 5 digitos");
				break;
		}
	
	}
	
	
	
	return 0;
}
