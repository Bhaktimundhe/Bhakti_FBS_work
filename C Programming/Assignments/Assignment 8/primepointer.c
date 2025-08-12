#include<stdio.h>
void prime(int*);
void main()
{
	int no;
	printf("Enter any number");
	scanf("%d",&no);
	
	prime(&no);
}

void prime(int*x)
{
	int i=2;
	int flag=0;
	
	while(i<=*x/2)
	{
		if(*x%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if (flag==0)
	printf("%d is prime number",*x);
	
	else
	printf("%d is not prime number",*x);
}