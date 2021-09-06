#include <stdio.h>

void insert(int(*)[4]);
void transpose(int(*)[4]);

int main(){

	int arr[4][4];

	printf("\nenter the array elemnts: ");

	insert(&arr);

	transpose(&arr);

	return 0;


}

void insert(int (*arr)[4]){

	for(int i=0;i<4;i++){

		for(int j=0;j<4;j++){

			scanf("%d",&arr[i][j]);

		}

	}

	printf("\nthe original array: \n");

        for(int i=0;i<4;i++){

                for(int j=0;j<4;j++){

                        printf("%d ",arr[i][j]);

                }

                printf("\n");

        }

}

void transpose(int (*arr)[4]){

	printf("the transpose array is: \n");

	int temp;

	for(int i=0;i<4;i++){

		for(int j=i;j<4;j++){

			temp=arr[i][j];

			arr[i][j]=arr[j][i];

			arr[j][i]=temp;

		}

	}

	for(int i=0;i<4;i++){

                for(int j=0;j<4;j++){

                        printf("%d ",arr[i][j]);

                }

                printf("\n");

        }

}
