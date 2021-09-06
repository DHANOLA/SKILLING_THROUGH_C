#include <stdio.h>

void insertion(int);
void sorting(char [][40],int);

int main(){

	int n;

	printf("\n enter the number of names: ");

	scanf("%d",&n);

	insertion(n);

	return 0;

}

void insertion(int row){

	char name[row][40];

	for(int i=0;i<row;i++){

		scanf(" %s",name[i]);

	}


	sorting(name,row);

}

void sorting(char str[][40],int row){

	char temp[40];

	for(int i=0;i<row;i++){

		if(char[i][0]>)

	}

}
