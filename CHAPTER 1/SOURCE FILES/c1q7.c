#include <stdio.h>

int main (){

int num,r,sum=0;

printf("\n enter the five-digit number: ");


scanf("%d",&num);

for(int i=0;i<5;i++){

r=num%10;

sum+=r;

num/=10;

}


printf("\n the sum of the digits of the number: %d",sum);

return 0;

}
