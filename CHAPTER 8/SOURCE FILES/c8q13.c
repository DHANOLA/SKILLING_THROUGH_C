#include <stdio.h>

void insert(int*,int);
void interchange(int*,int);

int main(){

	int n;

	printf("\n enter the number of elemnts in the array: ");

	scanf("%d",&n);

	int arr[n];

	insert(&arr[0],n);

	interchange(&arr[0],n);

	return 0;


}

void insert(int *arr,int n){

        for(int i=0;i<n;i++){

                        scanf("%d",&arr[i]);

        }

        printf("\nthe array created of the recent inpuit: \n");

        for(int i=0;i<n;i++){

                        printf("%d\n",*(&arr[i]));

        }

}

void interchange(int *arr,int n){

	int temp;

	for(int i=0;i<n;i++){

		temp=*(&arr[i]);

		*(&arr[i])=*(&arr[i+1]);

		*(&arr[i+1])=temp;

		i+=1;

	}

	printf("\nthe array created after the interchange: \n");

        for(int i=0;i<n;i++){

                        printf("%d\n",*(&arr[i]));

        }

}
