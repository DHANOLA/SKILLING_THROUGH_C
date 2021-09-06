#include <stdio.h>

float product(float*,int*);

int main(){

	float a,res;	int b;

	printf("enter the two numbers respectively: ");

	scanf("%f%d",&a,&b);

	res=product(&a,&b);

	printf("the result of a*b is: %f \n",res);

	return 0;


}

float product(float *a,int *b){

	return (*a)*(*b);

}
