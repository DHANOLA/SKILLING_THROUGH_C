#include <stdio.h>

int main (){

int n,q;

float r,p,a;

a=1;
printf("\n enter the principal, rate,year,interest compund resp. 10 times:\n");

for(int i=0;i<10;i++){

	printf("\n enter the printcipal,rate,year,interst compund for set number %d:\n",i);

	scanf("%f%f%d%d",&p,&r,&n,&q);

	a=(1+(r/q));

	for (int j=1;j<n*q;j++){

		a*=a;
	

		}

	printf("amount for set numbe %d: %f\n",i,a*p);

}

return 0;

}
