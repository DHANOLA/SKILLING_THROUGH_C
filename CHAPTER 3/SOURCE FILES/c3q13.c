#include <stdio.h>

int main (){

int num,i=1;

printf("\n enter the number to print it's table: ");

scanf("%d",&num);

while(i<=10){

	printf("%d X %d = %d \n",num,i,num*i);

	i+=1;


}

return 0;

}
