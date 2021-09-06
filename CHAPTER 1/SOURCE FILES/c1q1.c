#include <stdio.h>

int main (){


float basic_sal,dear_allow,house_rent_allow,gross_sal;

printf("enter the basic salary: ");

scanf("%f",&basic_sal);

dear_allow=.4*basic_sal;

house_rent_allow=.2*basic_sal;


gross_sal=dear_allow+house_rent_allow+basic_sal;


printf("the gross salary is: %f \n",gross_sal);





return 0;

}
