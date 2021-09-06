#include <stdio.h>

int main (){

int fact,n,num;

char ch;

do{
	printf("1. Factorial of numnber\n\n2.Prime or not\n\n3.Even or Odd\n\n4.Exit\n\nEnter your choice in number: ");

	scanf("%d",&n);

	switch(n){

	case 1: printf("enter the number: ");

		scanf("%d",&num);

		fact=1;

		if(num==0){
		
			fact=1;

			printf("factorial of %d is %d",num,fact);

			break;

	}

		else{

			for(int i=num;i>=1;i--){

				fact*=i;
	
				

			}

			printf("factorial of %d is %d",num,fact);

			break;

		}


	case 2: printf("enter the number: ");

		scanf("%d",&num);

		int flag=0;

		for(int i=2;i<=num;++i){

			if(num%i==0){

				flag=1;

				break;

	}

}
	
			if(num==1){

				printf("the number %d is prme number\n",num);

				break;

}

			else{

				if(flag==0){

				printf("the number %d is prime number",num);

				break;
}

				else{

				printf("ther numebr %d is not a prime number\n",num);


				break;
}


}

	case 3: printf("enter tjhe numbert: ");

		scanf("%d",&num);

		if(num%2==0){

			printf("number %d is even\n",num);

			break;
}

		else{

			printf("number %d is odd \n",num);

			break;
}


	case 4: break;

	default: printf("entre the correct option\n");

}

	printf("\nwant to try again...(y/n): ");

	scanf("%s",&ch);

}

while (ch=='y' || ch=='Y');

return 0;

}
