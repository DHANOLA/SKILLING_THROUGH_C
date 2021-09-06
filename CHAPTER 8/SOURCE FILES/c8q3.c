#include <stdio.h>

void selection(int*);
void bubble(int*);
void insertion(int*);

int main(){

	int arr[25],cpy_arr[25],temp;

	printf("\nenter the elements to be sorted: ");

	 for(int i=0;i<25;i++){ 

                scanf("%d",&arr[i]);

        }

	printf("\nthe sorted array after the selection sort algorithm:\n");

	for(int i=0;i<25;i++){

		cpy_arr[i]=arr[i];

	}

	selection(&arr[0]);

	for(int i=0;i<25;i++){

                arr[i]=cpy_arr[i];

        }

        printf("\nthe sorted array after the bubble sort algorithm:\n");

	bubble(&arr[0]);

	 printf("\nthe sorted array after the insertion sort algorithm:\n");

        insertion(&cpy_arr[0]);

	printf("\n");

	return 0;


}

void selection(int *arr){

	int temp;

	for(int i=0;i<24;i++){

		for(int j=i+1;j<25;j++){

			if(arr[i]>arr[j]){

				temp=arr[i];

				arr[i]=arr[j];

				arr[j]=temp;

			}

		}

	}

	for(int i=0;i<25;i++){

		printf("%d ",arr[i]);

	}

}

void bubble(int *arr){

	int temp;

	for(int i=0;i<25;i++){

		for(int j=0;j<24;j++){

			if(arr[j]>arr[j+1]){

				temp=arr[j];

				arr[j]=arr[j+1];

				arr[j+1]=temp;

			}

		}

	}

	for(int i=0;i<25;i++){

                printf("%d ",arr[i]);

        }


}

void insertion(int *arr){

	int temp;

	for(int i=1;i<25;i++){

		for(int j=i;j>0;j--){

			if(arr[j]<arr[j-1]){

				temp=arr[j];

				arr[j]=arr[j-1];

				arr[j-1]=temp;

			}

		}

	}

	for(int i=0;i<25;i++){

                printf("%d ",arr[i]);

        }

}
