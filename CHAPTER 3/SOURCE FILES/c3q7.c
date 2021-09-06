#include <stdio.h>

int main (){

int count=0;

printf("\n prime number between 1 to 300: ");


for(int j=1;j<=300;j++){

		for(int i=1;i<=j;i++){
		
				if(j%i==0){

					count+=1;

					}

			}

		if(count==2){

				printf("number %d prime \n",j);

			}


		}


return 0;

}
