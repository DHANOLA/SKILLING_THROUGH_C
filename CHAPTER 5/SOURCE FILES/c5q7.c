#include <stdio.h>
#include <math.h>

void calculate(int,int,int,int,int,int*,float*,float*);

int main(){


	int n1,n2,n3,n4,n5,res1=0;

	float res2=0,res3=0;

	printf("enter the 5 integers repectiovely: ");

	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

	calculate(n1,n2,n3,n4,n5,&res1,&res2,&res3);

	printf("the result is:\nsum: %d\nmean: %f\nstd. dev.: %f\n",res1,res2,res3);

	return 0;


}


void calculate(int n1,int n2,int n3,int n4,int n5,int *res1,float *res2,float *res3){


	*res1=n1+n2+n3+n4+n5;

	*res2=*res1/5;

	float mu;

	mu=pow(n1-*res2,2)+pow(n2-*res2,2)+pow(n3-*res2,2)+pow(n4-*res2,2)+pow(n5-*res2,2);

	*res3=sqrt(mu/5);

}
