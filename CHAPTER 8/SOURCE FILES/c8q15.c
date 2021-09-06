#include <stdio.h>

void insert(int(*)[5]);
void shift(int(*)[5]);

int main(){

	int arr[4][5];

	printf("\n enter the array elemnts (4X5): \n");

	insert(&arr);

	shift(&arr);

	return 0;


}

void insert(int (*arr)[5]){

        for(int i=0;i<4;i++){

		for(int j=0;j<5;j++){

			scanf("%d",&arr[i][j]);

		}

        }

        printf("\nthe original array: \n");

        for(int i=0;i<4;i++){

		for(int j=0;j<5;j++){

			printf("%d ",*(&arr[i][j]));

		}

	printf("\n");

	}

}

void shift(int (*arr)[5]){

	int temp,shift;

	printf("\n enter the number of left shift: ");

	scanf("%d",&shift);

	printf("the array after %d left shift: \n",shift);

	for(int i=0;i<shift;i++){

		for(int j=0;j<4;j++){

			temp=*(&arr[j][0]);

			for(int k=1;k<5;k++){

			*(&arr[j][k-1])=*(&arr[j][k]);

			}

		*(&arr[j][4])=temp;

		}

	}

        for(int i=0;i<4;i++){

		for(int j=0;j<5;j++){

                	printf("%d ",*(&arr[i][j]));

                }

		printf("\n");

        }

}
