#include <stdio.h>

void check(int*,int);
void insert(int*,int);

int main(){


	int n;

	printf("\nenter the n umber of elemnts: ");

	scanf("%d",&n);

	int arr[n];

	insert(&arr[0],n);

	printf("\nthe result of comparison check: \n");

	check(&arr[0],n);


	return 0;


}

void check(int *arr,int n){

	for(int i=0;i<n/2;i++){

		if(arr[i]==arr[n-1-i]){

			printf("arr[%d]==arr[%d] i.e. %d==%d\n",i,n-1-i,arr[i],arr[n-1-i]);

		}

		else{

			printf("arr[%d]!=arr[%d] i.e. %d!=%d\n",i,n-1-i,arr[i],arr[n-1-i]);

		}

	}

	printf("\n");


}

void insert(int *arr,int n){

	printf("\n enter the elemts: \n");

	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);

}

}
