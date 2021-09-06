#include <stdio.h>

int main (){

int hard,tens;
float cc;

printf("\n enter the hardness, carbon content, tensile strength of steel respectively: ");

scanf("%d%f%d",&hard,&cc,&tens);

if (hard>50 && cc<0.7 && tens>5600){

printf("\n the grade is 10 \n");

}

else if (hard>50){

		if (cc<0.7){

			printf("\n the grade of steel is 9 \n");
					}


		else if (tens>5600){

			printf("\n the grade of steel is 7 \n");
					
					}
}

else if (cc<0.7 && tens>5600){

		printf("\n the grade of steel is 8 \n");

}

else if (hard>50 || cc<0.7 || tens>5600){

		printf("\n the grade of steel is 6 \n");

}

else{

		printf("\n the garde of steel is 5 \n");

}


return 0;

}
