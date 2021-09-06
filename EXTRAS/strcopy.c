#include <stdio.h>


int main(){

	char str[30];

	const char (*strcopy)[30];

	int i=0;

	printf("\nenter the string: ");

	gets(str);

	char *string=str;

	strcopy=string;

	printf("\ncopy string: %s\n",*strcopy);

	return 0;

}

