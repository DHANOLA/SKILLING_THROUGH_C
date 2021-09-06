#include <stdio.h>

int main (){

int fact=1;

float sum=0;

for(int i=1;i<=3;i++){

	for(int j=i;j>=1;j--){

			fact*=j;

			}

	sum+=(i/fact);


		}

}

printf("%f",sum);

return 0;

}
