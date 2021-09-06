#include <stdio.h>

int main (){

int age1,age2,age3;

printf("\n enter the age of Ram, Shyam and Ajay respectively: ");

scanf("%d%d%d",&age1,&age2,&age3);

printf("\n the youngest among the three: ");

if (age1<age2){

	if (age1<age3){


		printf("Ram");


			}

	else{



		printf("Ajay");
		}


		}
else{

	if (age2<age3){

		printf("Shyam");

			}

	else{

		printf("Ajay");

		}

}


return 0;

}
