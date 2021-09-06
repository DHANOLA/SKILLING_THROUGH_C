#include <stdio.h>
#include <string.h>

void extraction(char*);

int main(){

	char str[100];

	printf("\nenter the nstring: ");

	gets(str);

	extraction(str);

	return 0;

}

void extraction(char str[100]){

	int pos,extract;

	printf("\nenter the starting position and the characters to be extarcetd rsep.: ");

	scanf("%d%d",&pos,&extract);

	if(extract==0){

		for(int i=pos-1;i<strlen(str);i++){

			printf("%c",str[i]);

                }

	}

	else{

		for(int i=pos-1;i<extract+pos;i++){

			printf("%c",str[i]);

		}

	}

	printf("\n");

}
