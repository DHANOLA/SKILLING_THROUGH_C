#include <stdio.h>

void marks(float,float,float,float*);

int main(){


	float avg,s1,s2,s3,per;

	printf("enter the marks of student in three subject's resp.: ");

	scanf("%f%f%f",&s1,&s2,&s3);

	marks(s1,s2,s3,&avg);

	printf("the result is:\navg.: %f\nper. in s1: %f\nper. in s2: %f\nper. in s3: %f\n",avg,s1/100,s2/100,s3/100);

	return 0;


}

void marks(float s1,float s2,float s3,float *avg){

	*avg=(s1+s2+s3)/3;

}
