#include <stdio.h>


int main(){

	char str[30];

	printf("\n enter the string: ");

	gets(str);

	int i=0;

	while(str[i]!='\0'){

		i+=1;

	}

	printf("\n length: %d\n",i);

	return 0;

}

