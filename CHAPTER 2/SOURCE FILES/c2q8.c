#include <stdio.h>

int main (){

float x1,y1,x2,y2,x3,y3;

printf("\n enter the points (x1,y1), (x2,y2) and (x3,y3) respectively: ");

scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);

if (((y2-y1)/(x2-x1))==((y3-y2)/(x3-x2))){


	printf("\n the points are omn the sme line: \n");


}

else{

	printf("\n tyhe points are not on the same line: \n");

}
return 0;

}
