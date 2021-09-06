#include <stdio.h>
#include <math.h>

void insert(int*,int);
float mean(int*,int);
void sd(int*,int);

int main(){

	int n;

	float res;

	printf("\nenter the nu8mber of elemnts: ");

	scanf("%d",&n);

	int arr[n];

	insert(&arr[0],n);

	sd(&arr[0],n);

	return 0;

}

void insert(int *arr,int n){

        for(int i=0;i<n;i++){

	scanf("%d",&arr[i]);

        }

        printf("\nthe array created of the recent input: \n");

        for(int i=0;i<n;i++){

        printf("%d ",arr[i]);

        }

}

float mean(int *arr,int n){

	float mean=0;

	for(int i=0;i<n;i++){

		mean+=arr[i];

	}

	return mean/n;

}


void sd(int *arr,int n){

	float mein;

	mein=mean(&arr[0],n);

	printf("\n the standard deviation is: \nelemnt		standard dev.\n");

	for(int i=0;i<n;i++){

		printf("%d          %f\n",*(&arr[i]),sqrt(pow(*(&arr[i])-mein,2))/n);

	}

}
