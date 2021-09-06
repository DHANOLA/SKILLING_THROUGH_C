#include <stdio.h>

int main (){

char health,gender,liv;

int age;

printf("\n enter the health of your's excellent (e) / poor (p): ");

scanf("%c",&health);

printf("\n enter the age: ");

scanf("%d",&age);

printf("\n you live in city (c) / village (v): ");

scanf("%c",&liv);

printf("\n are you male (m) / female (f): ");

scanf("%c",&gender);

if ((health=='e' || health=='E') && (age>=25 && age<=35) && (liv=='c' || liv=='C')){

		if (gender=='m' || gender=='M'){

				printf("\n your premium is Rs. 4 per thousand and your policy amount cannot exceed Rs. 2 lakhs. ");
					
								}


		else if(gender=='f' || gender=='F'){

				printf("\n your premium is Rs. 3 per thousand and your policy amount cannot exceed Rs. 1 lakh. ");
	}}

else if ((health=='P' || health=='P') && (age>=25 && age<=35) && (liv=='V' || liv=='V') && (gender=='m' || gender=='M')){

				printf("\n your premium is Rs. 6 per thousand and your policy cannot exceed Rs. 10,000. ");

			}

else {

		printf("\n you are not eligible for premium\n");

}


return 0;

}
