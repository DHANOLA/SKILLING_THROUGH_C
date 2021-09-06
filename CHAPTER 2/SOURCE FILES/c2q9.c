#include <stdio.h>
#include <math.h>
int main (){

float x,y,r;

printf("\n enter the points [x,y] and radius of the circle respectively:" );

scanf("%f%f%f",&x,&y,&r);

if ((pow(x,2)+pow(y,2))==pow(r,2)){


printf("the points [%f,%f] lies on the circle of radius %f \n",x,y,r);

}

else if ((pow(x,2)+pow(y,2))<pow(r,2)){


printf("the points [%f,%f] lies inside the circle of radius %f \n",x,y,r);



}

else{


printf("the points [%f,%f] lies outside the circle of radius %f \n",x,y,r);


}

return 0;

}
