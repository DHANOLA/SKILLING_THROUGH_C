#include <stdio.h>

int main (){

int days;

printf("\n enter the number of days you'r  late: ");

scanf("%d",&days);

if (days>0 && days<=5){

	printf("\n you have the fine of 50 paise \n");

}

else if (days<=10){

	printf("\n you have the fine of 1 ruppee \n");

}

else if (days<=30){

	printf("\n you have fine of ruppess 5 \n");

}

else{

	printf("\n you have late for 30 days, your membership is cancelled ! \n");
	
}

return 0;

}
