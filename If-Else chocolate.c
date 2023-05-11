#include <stdio.h>
#include <stdlib.h>



int main() {
 int z,n,x1,x2,y1,y2;
 scanf("%i",&n);
 scanf("%i %i",&x1,&y1);
 scanf("%i %i",&x2,&y2);
 
z=n/2;
	
 	if( ( (x1<=z)!=(x2<=z) ) || ((y2<=z)!=(y1<=z))) {
 		printf("S");
 		}else{
 		printf("N");
 			
		 }

	 return 0;
}
