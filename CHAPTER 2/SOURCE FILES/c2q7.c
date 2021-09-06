#include <stdio.h>

int main (){

float len,bred;

printf("\n enter the length and breadth of the rectanbgle respectively: ");

scanf("%f%f",&len,&bred);

if ((len*bred)>(2*(len+bred))){

printf("\n the area %f of rectangle is greater than it's perimetre, i.e %f \n",len*bred,2*(len+bred));


}

else{


printf("\n the area %f of rectangle is lesser than it's perimetre, i.e %f \n",len*bred,2*(len+bred));



}

return 0;

}
