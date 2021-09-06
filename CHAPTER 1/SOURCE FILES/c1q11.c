#include <stdio.h>

int main (){

int num,div=1,sum=0,flag;

printf("\n enter the number of five-digit: ");

scanf("%d",&num);

printf("\n number after adding '1' two each digit: \n");

for(int i=0;i<5;i++){

if (((num%10)+1) > 9){

flag=(num%10)+1;

flag%=10;

sum+=flag*div;

div*=10;


num/=10;}

else{

sum+=((num%10)+1)*div;

div*=10;


num/=10;}}

printf("%d",sum);


return 0;}
