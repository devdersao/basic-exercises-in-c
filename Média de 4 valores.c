#include <stdio.h>
#include <stdlib.h>




int main() {
float a,b,c,d,media;

printf("Digite 4 valores\n");
scanf("%f %f %f %f",&a,&b,&c,&d);
media = (a+b+c+d)/4;
printf("O resultado da soma de %.2f, %.2f, %.2f e %.2f = %.2f",a,b,c,d,media);
return(0);
}
