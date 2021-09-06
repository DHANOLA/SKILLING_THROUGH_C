#include <stdio.h>

int main (){


float c,d,temp;

printf("\n enter the two numbers respectively: ");

scanf("%f%f",&c,&d);

printf("before swapping: \n c= %f \n d= %f",c,d);

temp=c;

c=d;

d=temp;

printf("\n after swapping: \n c= %f \n d= %f",c,d);


return 0;

}
