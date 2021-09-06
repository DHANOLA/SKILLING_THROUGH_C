#include <stdio.h>
#include <math.h>

void insert(int*,int);
float norm(int*,int);

int main(){

	int n;

	float res;

	printf("\n enter th number of elemnts: ");

	scanf("%d",&n);

	int arr[n];

	insert(&arr[0],n);

	res=norm(&arr[0],n);

	printf("\n the norm of the array is: %f\n",res);

	return 0;


}

void insert(int *arr,int n){

        for(int i=0;i<n;i++){

                        scanf("%d",&arr[i]);

        }

        printf("\nthe original array: \n");

        for(int i=0;i<n;i++){

                        printf("%d ",arr[i]);

                printf("\n");

        }

}

float norm(int *arr,int n){

	int sum;

	for(int i=0;i<n;i++){

		sum+=pow(*(&arr[i]),2);

	}

	return sqrt(sum);

}
