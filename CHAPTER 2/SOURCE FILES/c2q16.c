#include <stdio.h>

int main (){

int a,b,c;

printf("\n enter the number1, number2, number3 respectively:  ");

scanf("%d%d%d",&a,&b,&c);

if (a>b){

	if (a>c){
	
			printf("\n the number1 is the greater samong te theree \n");

		}

	else{

			printf("\n the number3 is te grater than the three \n");

		}

}

else if(b>a){

	if(b>c){

			printf("\n thenumber2 is gratr among the hree \n");

		}

	else{

			printf("\n number1 is geater than the three \n");
		
		}

}

else {

	printf("\n the number3 is graeter among the three \n");

}

return 0;

}
