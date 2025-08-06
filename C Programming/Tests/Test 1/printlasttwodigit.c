#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int r1,r2,q1,sum;
	q1=no;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	sum=r1+r2;
	printf("The sum of last two digit is %d",sum);
	
	
}