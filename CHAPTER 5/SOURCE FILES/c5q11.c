#include <stdio.h>

int summing(int);

int main(){


	int n,sum;

	printf("enter the value of n: ");

	scanf("%d",&n);

	sum=summing(n);

	printf("the sum of number til %d is: %d\n",n,sum);

	return 0;


}

int summing(int n){

	if(n==0){

		return 0;

	}

	else{

		return n+summing(n-1);

}

}
