#include <stdio.h>


int main(){


 	int arr[25],pos=0,neg=0,odd=0,even=0;

	printf("\n enter the elements: ");

	for(int i=0;i<25;i++){

		scanf("%d",&arr[i]);

	}

	for(int i=0;i<25;i++){

		if(arr[i]>0){

			pos+=1;

		}

		else{

			neg+=1;

		}

		if(arr[i]%2==0){


			even+=1;

		}

		else{

			odd+=1;

		}

	}

	printf("following are details of the cvount:\npositive: %d\nnegative: %d\nodd: %d\neven: %d\n",pos,neg,odd,even);


	return 0;


}

