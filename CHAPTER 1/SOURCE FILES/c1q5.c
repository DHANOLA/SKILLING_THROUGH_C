#include <stdio.h>

int main (){


float len_rec,bred_rec,radii_circ;

printf("\n enter the length,braedth of rectangle and the radius of the circle respectively: ");

scanf("%f%f%f",&len_rec,&bred_rec,&radii_circ);

printf("\n the area of rectangle: %f \n the perimetere of rectangle is: %f \n the arae of circle: %f \n the circumference of circle: %f \n",len_rec*bred_rec,2*(len_rec+bred_rec),(22/7)*radii_circ*radii_circ,2*(22/7)*radii_circ);





return 0;

}
