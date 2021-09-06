#include <stdio.h>

void circular(int*,int*,int*);

int main(){


	int n1,n2,n3,flag=1;

	char fb='y';

	do{

		printf("enter the value of x,y,z resp.: ");

		scanf("%d%d%d",&n1,&n2,&n3);

		circular(&n1,&n2,&n3);

		printf("after %d circular shift values are: \nx= %d\ny= %d\nz= %d\nwant to do circular shift again(y/n): ",flag,n1,n2,n3);

		scanf("%s",fb);

		flag+=1;

	}while(fb=='y' || fb=='Y');


	return 0;


}

void circular(int *n1,int *n2,int *n3){

	int temp;

	temp=*n1;

	*n1=*n2;

	*n2=*n3;

	*n3=temp;


}
