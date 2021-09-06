#include <stdio.h>


int main(){

	char *str[]={

			"We will teach you how to...",

			"Move a Mountain",

			"level a building",

			"erase the past",

			"...all through C"

		};

	char str1[30],str2[30];

	printf("\n enter thje str1 and str2 resp.: ");

	gets(str1);

	gets(str2);

//	str+1;

	printf("%s",*(str[0]));

	return 0;
}

