#include <stdio.h>

int main (){

float x,y;

printf("\n enter the points [x,y] respecvtively: ");

scanf("%f%f",&x,&y);

if (x==0 && y==0){


printf("\n the points are at origin i.e (0,0)\n");


}

else if (x==0){

printf("\n the pooint lies on the y-axis\n");

}

else if (y==0){

printf("\n the point lies on the x-axis\n");

}
else{

printf("\n the points not lies on x-axis,y-axis,origin . It lies on the other region\n");


}

return 0;

}
