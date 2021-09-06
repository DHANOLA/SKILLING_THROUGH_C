#include <stdio.h>

int main (){

int i,j,space;

for(i=0;i<=6;i++){

	for(j=0;j<=6-i;j++){

		printf("%c ",65+j);

	}

	for(space=0;space<6-j;j++){ 

                printf("     ");

        }

	if(i==0){

		for(j=5-i;j>=0;j--){

			printf("%c ",65+j);
		}

	}

	else{

		for(j=6-i;j>=0;j--){

			printf("%c ",65+j);

		}

	}

	printf("\n");

}

return 0;

}
