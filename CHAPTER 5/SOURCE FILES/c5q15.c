#include <stdio.h>
#include <math.h>

float len(float,float,float,float);

float area(float,float,float,float,float,float);

int result(float,float,float,float,float,float);

int main(){


	float x1,y1,x2,y2,x3,y3;

	printf("enter the co-ordinates of vertices of triangle A(x1,y1),B(x2,y2),C(x3,y3) resp.: ");

	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);

	if(result(x1,y1,x2,y2,x3,y3)==0){

		printf("\n the point not lies inside the triangle.\n");

	}

	else{

		printf("\n the point lies inside the triangle.\n");

	}



	return 0;


}


float len(float x1,float y1,float x2,float y2){

	return sqrt(pow((y2-y1),2)+pow((x2-x1),2));

}

float area(float x1,float y1,float x2,float y2,float x3,float y3){

	float ab,bc,ac,s;

	ab=len(x1,y1,x2,y2);

	bc=len(x2,y2,x3,y3);

	ac=len(x3,y3,x1,y1);

	s=(ab+bc+ac)/2;

	return sqrt(s*(s-ab)*(s-bc)*(s-ac));

}


int result(float x1,float y1,float x2,float y2,float x3,float y3){

	float c1,c2,ar_abc,ar_aob,ar_boc,ar_aoc;

	ar_abc=area(x1,y1,x2,y2,x3,y3);

	printf("the area of the triangle ABC is: %f\nenter the cordinates of Q(r,s) resp.: ",ar_abc);

	scanf("%f%f",&c1,&c2);

	ar_aob=area(x1,y1,x2,y2,c1,c2);

	ar_boc=area(c1,c2,x2,y2,x3,y3);

	ar_aoc=area(x1,y1,c1,c2,x3,y3);

	if(ar_abc==(ar_aob+ar_boc+ar_aoc)){

		return 1;

	}

	else{

		return 0;

}

}
