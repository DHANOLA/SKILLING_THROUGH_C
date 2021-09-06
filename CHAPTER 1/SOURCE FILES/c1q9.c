#include <stdio.h>

int main (){

int num,r1,r2;

printf("\n enter the four-digit number: ");

scanf("%d",&num);

r1=num%10;

num/=10;

for(int i=0;i<3;i++){

r2=num%10;

num/=10;


}


printf("\n the sum of first and last digit is: %d",r1+r2);

return 0;

}



