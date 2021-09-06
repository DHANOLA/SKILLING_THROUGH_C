#include <stdio.h>

int main (){

int clas,sub;

char ch;

do{
	
	printf("ener the class (I,II,II only): ");

	scanf("%d",&clas);

	switch(clas){

		case 1: printf("enter the number of subjec ts student is failed: ");

			scanf("%d",&sub);

			if(sub>3){


				printf("the student is not eligible for the grace marks\n");

				break;

			}

			else{



				printf("the student get grace of 5 marks per subject respectively\n");

				break;

			}


		case 2: printf("enter the number of subjec ts student is failed: ");

                        scanf("%d",&sub);

			if(sub>2){

				printf("the student is not eligible for the grace marks\n");

				break;

			}


			else{


				printf("the student get the grace of marks 4 per subject respectively\n");

				break;

			}

		case 3:printf("enter the number of subjec ts student is failed: ");

                        scanf("%d",&sub);

                        if(sub>1){ 

                                printf("the student is not eligible for the grace marks\n");

                                break;

                        }


                        else{ 


                                printf("the student get the grace of marks 5 per subject respectively\n");

                                break; 

                        }



		default: printf("please enter a valid class!!!\n");

}


	printf("want to try again for another class (y/n): ");

	scanf("%s",&ch);


}while(ch=='y' || ch=='Y');

return 0;

}
