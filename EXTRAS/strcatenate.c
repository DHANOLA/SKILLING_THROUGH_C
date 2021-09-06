#include <stdio.h>


int main(){

	char str1[30],str2[80];

	int len=0,i=0;

	printf("\nenter the string 1: ");

	gets(str1);

	printf("\n enter the str2: ");

	gets(str2);

	while(str1[len]!='\0'){

		len+=1;

	}

	while(str2[i]!='\0'){

		str1[len+i]=str2[i];

		i+=1;

	}

	printf("str1: %s\n",str1);

	return 0;

}

