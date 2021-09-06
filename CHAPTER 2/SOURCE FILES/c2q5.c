#include <stdio.h>

int main (){

float num;

printf("\n enter the number: ");

scanf("%f",&num);

if (num<0){

printf("\n the absolute number is: %f",num*-1);

}

else{

printf("\n the absolute number is: %f",num*1);


}

return 0;

}
