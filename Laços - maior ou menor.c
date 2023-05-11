#include<stdio.h>
int main(){
	int x=0,y,z,w;
		while(x<10){
	
		scanf("%i",&y);
		if(x==0){
			z=y;
			w=y;
		}
		if(y>z){
			z=y;
		
		}
		if(y<w){
			w=y;
		}

		x++;	
	}
	printf("Maior: %i\n",z);
	printf("Menor: %i\n",w);
	
	return 0;
}
