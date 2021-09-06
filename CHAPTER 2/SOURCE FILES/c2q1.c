#include <stdio.h>

int main (){

float sel_pri,cos_pri;

printf("\n enter the cost price and the seling price respectively: ");

scanf("%f%f",&cos_pri,&sel_pri);

if (cos_pri>sel_pri){

printf("\n you have the loss of %f \n",cos_pri-sel_pri);

}


else
{

printf("\n you have the profit of %f \n",sel_pri-cos_pri);


}

return 0;

}
