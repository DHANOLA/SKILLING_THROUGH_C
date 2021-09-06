#include <stdio.h>

int main(){


	int arr[25],search,count=0;

	printf("enter the num bers: ");

	for(int i=0;i<25;i++){

		scanf("%d",&arr[i]);

	}

	printf("\nenter the element to be searched: ");

	scanf("%d",&search);

	for(int i=0;i<25;i++){

		if(arr[i]==search){

			count+=1;

		}

	}

	if(count==0){

		printf("\nthe elemnent is not found...\n");

	}

	else{

		printf("\nthe element is founded.\nno. of time %d appeared: %d\n",search,count);

	}


	return 0;


}

