#include <stdio.h>
#include <math.h>

float area(float,float,float);

int main(){


	float a,b,c,ar;

	printf("enter the sides of triangle[a,b,c] resp.: ");

	scanf("%f%f%f",&a,&b,&c);

	ar=area(a,b,c);

	printf("the area of trangle is: %f\n",ar);

	return 0;


}

float area(float a,float b,float c){

	float s;

	s=(a+b+c)/2;

	return sqrt(s*(s-a)*(s-b)*(s-c));

}
