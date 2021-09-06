#include <stdio.h>

void insert(int*,int);
void reverse(int*,int*,int);

int main(){


	int n;

	printf("\nenter the numnber of elements: ");

	scanf("%d",&n);

	int arr[n],cpy_arr[n];

	insert(&arr[0],n);

	reverse(&arr[0],&cpy_arr[0],n);


	return 0;


}

void insert(int *arr,int n){

	printf("\n enter the elemts: \n");

	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);

}

}

void reverse(int *arr,int *cpy_arr,int n){

	printf("\nthe original array: \n");

        for(int i=0;i<n;i++){

                printf("%d ",arr[i]);

}

	printf("\nthe reversed array: \n");

        for(int i=0;i<n;i++){

		cpy_arr[i]=arr[n-1-i];

		printf("%d ",cpy_arr[i]);

}

	printf("\n");


}
