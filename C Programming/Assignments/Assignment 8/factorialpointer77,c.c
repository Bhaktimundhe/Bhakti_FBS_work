#include<stdio.h>
void fact(int*);
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	
	fact(&no);
}

void fact(int*a)
{
	int factorial=1;
	int i=1;
	if(*a<0)
		printf("factorial is not defined for negative integer");

	else
		while(i<=*a) {

			factorial=factorial*i;
		
			i++;
			
		}
		printf("%d",factorial);
}