#include <stdio.h>


int main(){

	char str1[30],str2[30];

	int flag=0,i=0;

	printf("\n wnter the str1: ");

	gets(str1);

	printf("\nenter the str2: ");

	gets(str2);

	while(str1[i]==str2[i] || str1[i]=='\0' || str2[i]=='\0'){

		flag=1;

		i+=1;

	}

	if(flag==0){

		puts("\n not same");

	}

	else{

		puts("\nsame");

	}

	return 0;

}

