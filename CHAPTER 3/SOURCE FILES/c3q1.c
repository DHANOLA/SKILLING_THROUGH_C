#include <stdio.h>

int main (){

int i,hour;

for (i=0;i<10;i++){

printf("\n enter teh number of teh hours: ");

scanf("%d",&hour);

if (hour>40){

		printf("\n the oveertime paid is %d",(hour-40)*12);

}

else{

	printf("\n the employe is not eligible fo the ovepaid \n");
}


}
return 0;

}

