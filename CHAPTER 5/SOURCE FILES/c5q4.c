#include <stdio.h>

void leap(int);

int main(){

	int year;

	printf("enter the year to check if leap or not: ");

	scanf("%d",&year);

	leap(year);


	return 0;

}

void leap(year){

	if(year%400==0){

		if(year%4==0){

			printf("year is not leap one\n");

		}

		else{

			printf("year is not the leap one\n");

		}

	}

	else if(year%100==0){

		printf("year is not the leap one\n");

	}

	else{

		printf("year is not the leap one\n");

	}

}
