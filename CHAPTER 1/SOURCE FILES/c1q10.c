#include <stdio.h>

int main (){

int money,count_100=0,count_50=0,count_10=0,total;

printf("\n enter the money in hundereds only: ");

scanf("%d",&money);

total=money;

count_100=money/100;

money%=100;

count_50=money/50;

money%=50;

count_10=money/10;

money%=10;

printf("\n the total number of currencies for money: %d \n \n Hundereds Notes= %d \n Fifty Notes= %d \n Ten Notes= %d \n And Remaining Money= %d \n",total,count_100,count_50,count_10,money);




return 0;

}
