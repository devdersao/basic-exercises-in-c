#include <stdio.h>
#include <stdlib.h>



int main() {
	int T1,T2,T3,a,b,c;
	a=1;
	b=2;
	c=3;

	scanf("%i%i%i",&T1,&T2,&T3);
				if(T1<=1000 && T2<=1000 && T3<=1000){
							if(T1<T2 && T1<T3 && T2<T3){
								 printf("%i\n%i\n%i",a,b,c);	
														}
								if(T2<T1 && T2<T3 && T1<T3){
									printf("%i\n%i\n%i",b,a,c);
															}	
									if(T3<T1 && T3<T2 && T1<T2){
										printf("%i\n%i\n%i",c,a,b);
																	}
										if(T1<T2 && T1<T3 && T3<T2){
											printf("%i\n%i\n%i",a,c,b);
																		}
											if(T2<T3 && T2<T1 && T3<T1){
												printf("%i\n%i\n%i",b,c,a);
																			}
													if(T3<T1 && T3<T2 && T2<T1){
														printf("%i\n%i\n%i",c,b,a);
																							}
													
		
return 0;
}
}
