#include <stdio.h>

void factor(int);

int main(){


	int num;

	printf("enter the numbner to print iot's prime factor's: ");

	scanf("%d",&num);

	factor(num);

	printf("\n");

	return 0;

}

void factor(int num){

	for(int j=2;j<=num;j++){

		int i = 2 ;

		while(i<=num-1){

			if(num%i==0){

				break;

			}

			i++ ;

		}

		printf("after while\n");

		if(i==num){

			while(num%i==0 || num!=0){

				printf("%d",i);

				num/=i;

			}

		}

	}

}
