#include <stdio.h>

void count(int);

void display(int,int,int,int,int,int,int);


int main(){

	int num;

	printf("enter the number to print it's roman number: ");

	scanf("%d",&num);

	if(num==4){

		printf("IV\n");

	}

	else{

	count(num);

	}

	printf("\n");

	return 0;


}


void count(num){

	int j,v,x,l,c,d,m;

	m=num/1000;	num%=1000;

	d=num/500;      num%=500;

	c=num/100;      num%=100;

	l=num/50;       num%=50;

	x=num/10;	num%=10;

	v=num/5;        num%=5;

		j=num/1;

	display(m,d,c,l,x,v,j);

}


void display(m,d,c,l,x,v,j){

	for(int i=0;i<m;i++){

		printf("M");

	}

        for(int i=0;i<d;i++){ 

                printf("D");


        }

        for(int i=0;i<c;i++){ 

                printf("C");

        }

        for(int i=0;i<l;i++){ 

                printf("L");


        }

        for(int i=0;i<x;i++){ 

                printf("X");

        }

        for(int i=0;i<v;i++){ 

                printf("V");

        }

        for(int i=0;i<j;i++){ 

                printf("I");

        }


}
