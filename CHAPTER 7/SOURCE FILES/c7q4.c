#include <stdio.h>
#include <math.h>
#include "c7q4.h"

int main(){


	float p,r,t,n;

	printf("enter the p,r,t,n resp.: ");

	scanf("%f%f%f%f",&p,&r,&t,&n);

	printf("the simple interest is: %f\nthe amount is: %f\n",SIMPLE_INTEREST(p,r,t),AMOUNT(p,r,t,n));

	return 0;


}

