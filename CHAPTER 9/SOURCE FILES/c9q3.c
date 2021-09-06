#include <stdio.h>
#include <string.h>

int match(char);
int  str2num(char*);

int main(){

	char num[100];

	printf("\n enter the number to convert it to string: ");

	gets(num);

	printf("\n the string after conversion to int: %d\n",str2num(num));

	return 0;

}

int match(char str){

	switch(str){

                case '0': return 0;

		case '1': return 1;

                case '2': return 2;

                case '3': return 3;

                case '4': return 4;

                case '5': return 5;

                case '6': return 6;

                case '7': return 7;

                case '8': return 8;

                case '9': return 9;

	}

}

int str2num(char str[30]){

	int tens=1,num=0;

	for(int i=strlen(str)-1;i>=0;i--){

		num+=match(str[i])*tens;

		tens*=10;

	}

	return num;

}
