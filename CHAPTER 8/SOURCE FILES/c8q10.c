#include <stdio.h>

void insert(int(*)[5]);
void large(int(*)[5]);

int main(){

	int arr[5][5];

	printf("enter the elements of 5X5 array : ");

	insert(&arr);

	printf("\nthe largest elemt in this array: ");

	large(&arr);

	return 0;


}

void insert(int (*arr)[5]){

	for(int i=0;i<5;i++){

		for(int j=0;j<5;j++){

			scanf("%d",&arr[i][j]);

		}

	}

}

void large(int (*arr)[5]){

	int large=arr[0][0];

	for(int i=0;i<5;i++){ 

                for(int j=0;j<5;j++){ 

                        if(arr[i][j]>large){

				large=arr[i][j];

			}

                }

        }

	printf("%d\n",large);

}
