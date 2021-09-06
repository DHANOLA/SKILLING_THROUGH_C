#include <stdio.h>

void insert(int(*)[6],int);
void add(int(*)[6],int(*)[6]);
void multiply(int(*)[3],int(*)[3]);
void sort(int(*)[4]);
int determine(int(*)[5]);

int main(){

	int arr1[6][6],arr2[6][6],n;

	char ch;

	do{

		printf("\n1. addition of array\n2. multiplication of array\n3. sorting of array\n4. determinant of array\nenter the choice(1 -> 4): ");

		scanf("%d",&n);

		switch(n){

			case 1:	printf("\n enter the array 1 elemts: \n");

				insert(&arr1,6);

				printf("\n enter the array 2 elemts: \n");

			        insert(&arr2,6);

				printf("\nthe addition i.e. (array 1)+(array 2): \n");

			        add(&arr1,&arr2);

				break;

			case 2: printf("\n enter the array 1 elemts: \n");

                                insert(&arr1,3);

                                printf("\n enter the array 2 elemts: \n");

                                insert(&arr2,3);

                                printf("\nthe multiplication i.e. (array 1)X(array 2): \n");

                                multiply(&arr1,&arr2);

                                break;

			case 3: printf("\n enter the array elemts: \n");

                                insert(&arr1,4);

                                printf("\nthe sorting of array: \n");

                                sort(&arr1);

                                break;

//			case 4: printf("\n enter the array elemts: \n");

                                insert(&arr1,5);

                                printf("\nthe determinant of array i.e. det(array 1): \n");

                                determine(&arr1);

                                break;

			default: printf("\n enter the correct input(1 -> 4)....\n");

		}

		printf("\n want to try again(y/n): ");

		scanf(" %c",&ch);

	}while(ch=='y' || ch=='Y');


	return 0;

}

void insert(int (*arr)[6],int n){

	for(int i=0;i<n;i++){

		for(int j=0;j<n;j++){

			scanf("%d",&arr[i][j]);

		}

	}

	printf("\nthe array created of the recent inpuit: \n");

	for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                        printf("%d ",arr[i][j]);

                }

                printf("\n");

        }

}

void add(int (*arr1)[6],int (*arr2)[6]){

	for(int i=0;i<6;i++){

		for(int j=0;j<6;j++){

			printf("%d ",arr1[i][j]+arr2[i][j]);

		}

		printf("\n");

	}

}

void multiply(int (*arr1)[3],int (*arr2)[3]){

	for(int i=0;i<3;i++){

		for(int j=0;j<3;j++){

			printf("%d ",(arr1[i][j])*(arr2[i][j]));

		}

	}
}

void sort(int (*arr)[4]){

	int temp;

	for(int i=0;i<4;i++){

		for(int k=0;k<3;k++){

			for(int j=0;j<3;j++){

				if(arr[i][j]>arr[i][j+1]){

					temp=arr[i][j];

					arr[i][j]=arr[i][j+1];

					arr[i][j+1]=temp;

				}

			}

		}

	}

	for(int i=0;i<4;i++){

		for(int j=0;j<4;j++){

			printf("%d ",arr[i][j]);

		}

		printf("\n");

        }

}
