#include <stdio.h>

int main (){

float temp_f,temp_c;

printf("\n enter the temperature in farheneit: ");

scanf("%f",&temp_f);

temp_c=(temp_f-32)*(5/9);

printf("\n the temperature in centigrade is: %f",temp_c);


return 0;

}
