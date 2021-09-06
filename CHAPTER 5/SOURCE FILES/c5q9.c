#include <stdio.h>

int digsum(int);

int digsum_recur(int); 

int main(){


	int num,sum,sumrec;

	printf("enter the 5-digit number to print it's digit sum: ");

	scanf("%d",&num);

	sum=digsum(num);

	sumrec=digsum_recur(num);

	printf("the sum of digit's is without recursion: %d\nthe sum of digit using recursion: %d\n",sum,sumrec);


	return 0;


}


int digsum(int num){

	int sum=0;

	while(num!=0){

		sum+=num%10;

		num/=10;

	}

	return sum;

}


int digsum_recur(int num){

	if(num==0){

		return 0;

	}

	else{

		return (num%10)+digsum_recur(num/10);

	}

}
