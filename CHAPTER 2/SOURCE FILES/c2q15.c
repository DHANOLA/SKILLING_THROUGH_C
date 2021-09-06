#include <stdio.h>

int main (){

int hours;

printf("\n enter the number of hours the worker taken to complete the job: ");

scanf("%d",&hours);

if (hours<=3){

	printf("\n teh worker is higly efficient \n ");
}

else if(hours<=4){

	printf("\n the worker is required to improve it's speed \n ");

}

else if(hours<=5){

	printf("\n the worker is needs to be tarined \n");

}

else{

	printf("\n the worker mujst leave the company \n");

}

return 0;

}
