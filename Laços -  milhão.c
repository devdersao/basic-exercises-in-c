#include<stdio.h>
int main(){
	int y=0,z=0,w,x;
	
	scanf("%i",&x);
	while(y<=1000000){
			y++;
		scanf("%i",&w);
		z+=w;
		if(z>=1000000){
			printf("%i",y);
			break;
		}
	
	}
	
	return 0;
}
