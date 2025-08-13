#include<stdio.h>
void pallindrome(int*);
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	
	pallindrome(&no);
}

void pallindrome(int*a)
{
	int rem,ori;
	int rev=0;
	ori=*a;
	
	while(*a!=0)
	{
		rem=*a%10;
		rev=rev*10+rem;
		*a=*a/10;
		
	}
	
	if(ori==rev)
	   printf("%d is pallindrome number",ori);
	   else
	   printf("%d is not a pallindrome number",ori);	
}