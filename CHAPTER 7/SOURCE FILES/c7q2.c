#include <stdio.h>
#include "c7q2.h"

int main(){


	char ch;	int n;	float x,y,z,res;

	do{

		printf("1. area of triangle\n2. perimetere of triangle\n3. arae of circle\n4. perimenter of circle\n5. area of square\n6. perimeter of square\nenter your choice(1 -> 6): ");

		scanf("%d",&n);

		switch(n){

			case 1:printf("\nenter the base and height of triangle resp.: ");

				scanf("%f%f",&x,&y);

				printf("\nthe area of the triangle is: %f",TRIANGLE_AREA(x,y));

				break;


			case 2:printf("\nenter the sides of triangle resp.: ");

                                scanf("%f%f%f",&x,&y,&z);

                                printf("\nthe perimeter of the triangle is: %f",TRIANGLE_PERI(x,y,z));

				break;


			case 3:printf("\nenter the radius of circle: ");

                                scanf("%f",&x);

                                printf("\nthe area of the circle is: %f",CIRCLE_AREA(x));

				break;


			case 4:printf("\nenter the radius of circle: ");

                                scanf("%f",&x);

                                printf("\nthe perimeter of the circle is: %f",CIRCLE_PERI(x));

				break;


			case 5:printf("\nenter the side of square: ");

                                scanf("%f",&x);

                                printf("\nthe area of the square is: %f",SQUARE_AREA(x));

				break;


			case 6:printf("\nenter the side of square: ");

                                scanf("%f",&x);

                                printf("\nthe area of the square is: %f",SQUARE_AREA(x));

				break;

			default:printf("\n enter the correct option....\n");


		}

		printf("\nwant to try again(y/n): ");

		scanf(" %c",&ch);

	}while(ch=='y' || ch=='Y');

	return 0;


}

