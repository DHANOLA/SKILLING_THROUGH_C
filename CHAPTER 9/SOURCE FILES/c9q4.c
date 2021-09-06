#include <stdio.h>
#include <string.h>

void space(char*);

int main(){

	char str[100];

	printf("\n enter tjhe string to remove consecutive space by one space: ");

	gets(str);

	printf("\n string after removing consecutive space: ");

	space(str);

	return 0;

}

void space(char str[100]){

	for(int i=0;i<strlen(str);i++){

		if(str[i]==' '){

			while(str[i]==' '){

				i+=1;

			}

			printf(" %c",str[i]);

		}

		else{

			printf("%c",str[i]);

		}

	}

	printf("\n");

}
