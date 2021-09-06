#include <stdio.h>

int main (){

int num,prod=1;

printf("\n enter the number to find it's facorial: ");

scanf("%d",&num);

if (num==0){

printf("\n the factoril is 1 \n");

}



else{

	for(int i=num;i>=1;i--){

			prod*=i;

}

	printf("the factorial of the number is %d \n",prod);



}



return 0;

}
