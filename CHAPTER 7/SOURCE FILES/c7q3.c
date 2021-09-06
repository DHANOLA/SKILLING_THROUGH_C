#include <stdio.h>
#define ARITHMETIC_MEAN ((x+y)/2)
#define ABSOLUTE_VALUE (x<0)
#define UPPER_2_LOWER (ch>=92 && ch<=122)
#define BIGGER (x>y)


int main(){

	char ch;	int n;	float x,y;

	do{

		printf("1.find arithmetic mean of two numbers\n2. find absolute value of a number\n3.  convert a uppercase alphabet to lowercase\n4. obtain the bigger of two numbers\nenter your choice(1 -> 4): ");

		scanf("%d",&n);

		switch(n){

			case 1: printf("enter the num1 and num2 resp.: ");

				scanf("%f%f",&y,&x);

				printf("the arithmetic mean of %f and %f is: %f\n",x,y,ARITHMETIC_MEAN);

				break;

			case 2: printf("enter the number: ");

				scanf("%f",&x);

				if ABSOLUTE_VALUE{

					printf("the absolute value of %f is: %f\n",x,-1*x);

				}

				else{

					printf("the absolute value of %f is: %f\n",x,x);

				}

				break;

			case 3: printf("\n enter the  characetr: ");

				scanf(" %c",&ch);

				if(UPPER_2_LOWER){

					printf("the characet in the uppercase is: %c",ch-32);

				}


				else{

					printf("the letter %c is already in uppercase",ch);

				}

				break;


			case 4: printf("\n netre the two number resp.: ");

				scanf("%f%f",&x,&y);

				if(BIGGER){

					printf("\n%f is graeter than %f",x,y);

				}

				else{

					printf("\n%f is smaler than %f",x,y);

				}

				break;

			default:printf("\nenetr the correct choice...\n");

		}

		printf("\n want to try again(y/n): ");

		scanf(" %c",&ch);

	}while(ch=='y' || ch=='Y');

	return 0;


}

