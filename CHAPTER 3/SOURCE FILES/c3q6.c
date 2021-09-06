#include <stdio.h>

int main (){

int num,pos=0,neg=0,zero=0;

char ch='y';

do{

	printf("\n enter the number: ");

	scanf("%d",&num);

	if(num<0){

		neg+=1;

		}

	else if(num>0){

		pos+=1;

		}

	else{

		zero+=1;

		}

	printf("\n want to enter more numbers (y/n): ");

	scanf("%c",&ch);

}while(ch=='y' || ch=='Y');

printf("\n number of :- \n zeros %d \n positive %d \n negative %d \n",zero,pos,neg);

return 0;

}
