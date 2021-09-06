#include <stdio.h>
#include <math.h>

float series(float);

int fact(int);

int main(){


	float x,res;

	printf("enter the value of x: ");

	scanf("%f",&x);

	res=series(x);

	printf("the result is:\n sin(%f)=%f\n",x,res);

	return 0;


}

float series(float x){

	float res=0;

	int po=2;

	for(int i=1;i<=25;){

		res=res+(pow(-1,po)*(pow(x,i)/fact(i)));

		i+=2;	po+=1;

	}

	return res;

}

int fact(int n){

	if(n==0){

		return 1;

	}

	else{

		return n*fact(n-1);

	}

}
