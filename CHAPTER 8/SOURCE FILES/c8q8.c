#include <stdio.h>

void modify((int)*,int);

int main(){

	int n;

	printf("enter the number of elemnts: ");

	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);

	}

	modify(&arr,n);

	for(int i=0;i<n;i++){

		printf("%d ",arr[i]);

}

	printf("\n");

	return 0;


}

void modify(int *arr,int n){

	for(int i=0;i<n;i++){

		*(arr+i)*=3;

	}

}
