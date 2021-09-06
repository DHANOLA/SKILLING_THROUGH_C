#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;

	printf("\nenter the array size: ");

	scanf("%d",&n);

	int *arr=(int*) malloc(n*sizeof(int));		//dynamic array created with garbage value

	printf("\nthe array after  creation witgh garbage value: \n");

	for(int i=0;i<n;i++){

		printf("%d ",arr[i]);

	}

        printf("\nenter array values: \n");

        for(int i=0;i<n;i++){

                scanf("%d",&arr[i]);

        }

        
        printf("\nthe array after inserting value: \n");

        for(int i=0;i<n;i++){

                printf("%d ",arr[i]);

        }

	return 0;

}

