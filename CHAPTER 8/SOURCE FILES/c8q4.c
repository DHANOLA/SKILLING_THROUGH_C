#include <stdio.h>

void prime(int*);
void fill(int*);

int main(){


	int arr[100];

	printf("\n elements of array which are prime number (1 -> 100): \n");

	fill(&arr);

	prime(&arr[0]);

	return 0;


}

void fill(int *arr){

	for(int i=1;i<=100;i++){

		arr[i-1]=i;

	}

}

void prime(int *arr){

	for(int i=2;i<=100;i++){

		if(arr[i]!=0){

			for(int j=i+1;j<=100;j++){

				if(arr[j]%i==0){

					arr[j]=0;

				}

			}

		}

	}

	for(int i=1;i<=100;i++){

		if(arr[i]!=0){

			printf("%d ",arr[i]);

		}

	}

}
