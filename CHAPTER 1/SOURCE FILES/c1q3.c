#include <stdio.h>

int main (){

//int i;

float marks[5],sum=0;

printf("\n enter the marks of student in 5 subjects respectively: \n");

for(int i=0;i<5;i++){

scanf("%f",&marks[i]);



}

for(int i=0;i<5;i++){


sum+=marks[i];

}

printf("the percentage of student is: %f \n",sum/5);

return 0;

}
