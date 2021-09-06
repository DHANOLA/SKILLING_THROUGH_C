#include <stdio.h>

int main (){

int n1,n2,res=1;

printf("\n enter the two number (a & b respectively): ");

scanf("%d%d",&n1,&n2);

for(int i=0;i<n2;i++){

	res*=n1;

}

printf("\n the result of of a^b: %d \n",res);

return 0;

}
