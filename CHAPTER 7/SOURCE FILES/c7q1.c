#include <stdio.h>
#define CHARACTER_LOWER (ch>=97 && ch<=122)
#define CHARACTER_UPPER (ch>=65 && ch<=90)
#define BIGGER_OF_TWO (n1>n2)

void lower(char);

void upper(char);

void is_character(char);

void bigger(int,int);

int main(){

	int n,n1,n2;

	char fb,ch;

	do{

		printf("1. test whether a character entered is a small case letter or not.\n2. test whether a character entered is a upper case letter or not.\n 3. test whether a character is an alphabet or not.\n4. To obtain the bigger of two numbers.\nenter your choice(1 -> 4): ");

		scanf("%d",&n);

		switch(n){

				case 1:printf("enter the character: ");

					scanf(" %c",&ch);

					lower(ch);

					break;

				case 2:printf("enter the character: ");

                                        scanf(" %c",&ch);

                                        upper(ch);

					break;

				case 3:printf("enter the character: ");

                                        scanf(" %c",&ch);

                                        is_character(ch);

					break;


				case 4:printf("enter the num1 and num2 resp.: ");

                                        scanf("%d%d",&n1,&n2);

                                        bigger(n1,n2);

					break;

				default:printf("enter a valid option....\n");

		}

	printf("want to try again(y/n): ");

	scanf(" %c",&fb);

}while(fb=='y' || fb=='Y');


	return 0;


}


void upper(char ch){

	if(CHARACTER_UPPER){

		printf("the character is uppercase.\n");

	}

        else{

		printf("the charcter is no uppercase.\n");

	}

}

void lower(char ch){

        if(CHARACTER_LOWER){

                printf("the character is lowercase.\n");

        }

        else{

                printf("the charcter is no lowercase.\n");

        }

}

void is_character(char ch){

	if(CHARACTER_LOWER || CHARACTER_UPPER){

                printf("the character is alphabet.\n");

        }

        else{

                printf("the charcter is not alphabet.\n");

        }


}

void bigger(int n1,int n2){

	if(BIGGER_OF_TWO){

                printf("%d is graeter than %d.\n",n1,n2);

        }

        else{

                printf("%d is lower than %d.\n",n1,n2);

        }


}
