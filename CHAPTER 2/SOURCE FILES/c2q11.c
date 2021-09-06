#include <stdio.h>

int main (){

char ch;

printf("\n enter the character: ");

scanf("%s",&ch);

if (ch>='a' && ch<='z'){

printf("\n the chrcter is smaller alphabaet case\n");

}

else if (ch>='A' && ch<='Z'){

printf("\n the character is uppercase alphabet\n");

}

else if (ch>='0' && ch<='9'){

printf("\n the characeter entered is a numbert\n");

}

else {

printf("\n the charcetr entered is other than number and alphabets\n");

}
return 0;

}
