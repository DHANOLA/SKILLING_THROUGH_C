#include <stdio.h>

void binary(int);


int main(){


	int dec;

	printf("enter the number to print it's binary: ");

	scanf("%d",&dec);

	printf("the binary is: \n");

	binary(dec);

	printf("\n");

	return 0;


}

void binary(int dec){

	if(dec==0){

		printf("0");

	}

	else{

		binary(dec/2);

		printf("%d",dec%2);

	}

}

