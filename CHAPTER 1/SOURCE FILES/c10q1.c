#include <stdio.h>

void print(struct data);

struct data{

	int rno,year;

	char name[40],dept[20],course[10];

}obj;

int main(){

	struct data b={23,333,"dewf","ewfaf"};

	print(b);

	return 0;

}

void print(struct data obj){

	printf("%d",obj.rno);

}
