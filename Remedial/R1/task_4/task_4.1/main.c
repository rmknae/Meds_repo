#include <stdio.h>
#include "header.h"


int  main(){

int a ;
int b ;
printf("Enter first integer: ");
scanf("%d", &a);
printf("Enter second integer: ");
scanf("%d", &b);

printf("%d + %d = %d\n ", a,b, add(a,b));

}