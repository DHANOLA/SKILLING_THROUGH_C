#include <stdio.h>

void insert(int*,int);
void smallest(int*,int);

int main(){

	int n;

	printf("\n enter the numnber of elemts: ");

	scanf("%d",&n);

	int arr[n];

	insert(&arr[0],n);

	printf("\nthe smallest elemet is: ");

	smallest(&arr[0],n);

	return 0;


}

void insert(int *arr,int n){

	printf("\n enter the elemts: \n");

	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);

	}

}

void smallest(int *arr,int n){

	int small=*arr;

	for(int i=0;i<n;i++){

		if(*(arr+i)<small){

			small=*(arr+i);

		}

	}

	printf("%d\n",small);

}
