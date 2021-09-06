#include <stdio.h>

int euclid(int,int);

int main(){


	int n1,n2,res;

	printf("enter the number n1 & n2 to find greatest common divisor: ");

	scanf("%d%d",&n1,&n2);

	res=euclid(n1,n2);

	printf("the g.c.d between %d and %d is: %d\n",n1,n2,res);

	return 0;


}

int euclid(int n1,int n2){

	int r;

	r=n1/n2;

	if((n1-(r*n2))==0){

		return n2;

	}

	else{

		return euclid(n2,(n1-(r*n2)));

	}

}
