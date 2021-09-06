#include <stdio.h>
#include <string.h>

void  low2up(char*);

int main(){

	char str[30];

	printf("\n enter the string: ");

	gets(str);

	printf("converted string: \n");

	for(int i=0;i<strlen(str);i++){

		if(str[i]>=97 && str[i]<=123){

			printf("%c",str[i]-32);

		}

		else{

			printf("%c",str[i]);

		}

	}

	printf("\n");

	return 0;

}
