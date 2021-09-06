#include <stdio.h>
#include <math.h>

float area(float,float,float);

int main(){

	float s1,s2,a;

	printf("\n enter the sides of te triangle and angles resp.:\n ");\

	scanf("%f%f%f",&s1,&s2,&a);

	a=area(s1,s2,a);

	printf("\n the area is: %f\n",a);

	return 0;

}

float area(float s1,float s2,float a){

	return .5*s1*s2*sin(a);

}
