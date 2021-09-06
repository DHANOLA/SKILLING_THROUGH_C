#include <stdio.h>

int main (){

printf("\n i=2+y+(.5x) \n");

for(int y=1;y<=6;y++){

	for(float x=5.5;x<=12.5;){

		printf("\n %f",2+y+(0.5*x));

		x+=.5;

}

}

return 0;

}
