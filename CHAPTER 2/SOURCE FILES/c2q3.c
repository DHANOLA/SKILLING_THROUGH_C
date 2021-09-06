#include <stdio.h>

int main (){

int year;

printf("\n enter the year: ");

scanf("%d",&year);

if (year%100==0){

		if (year%4==0){


			printf("\n the year is leap year...\n");
				

				}
		else{

			printf("\n the year is not a leap year...\n");
			}
}

else{

		printf("\n the year ios not a leap year..\n");



}


return 0;

}
