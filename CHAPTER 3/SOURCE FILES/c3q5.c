#include <stdio.h>

int main (){

int i,num,cpy_num,r,res=0;

printf("\n enter the number to check if it is an armstrong number or not: ");

scanf("%d",&num);

cpy_num=num;

while(num!=0){

	r=num%10;

	r=r*r*r;

	res+=r;

	num/=10;

}



if(res==cpy_num){

	printf("\n the number is an armstrong number \n");

}

else{

	printf("\n the number is not an armtrong number \n");

}

return 0;

}
