#include<stdio.h>
void main() {
	int no=5, fact=1,i=1;
	if(no<0)
		printf("factorial is not defined for negative integer");

	else
		while(i<=no) {

			fact=fact*i;
		
			i++;
			
		}

	printf("factorial of %d = %d",no,fact);

}