#include<stdio.h>
void main()
{
	int num,reverse,first,middle,last;
	
	  printf("enter any three digit no");
	  scanf("%d",&num);
	
	first = num/100;
	middle =(num/10)%10;
	last = num%10;
	
	   reverse = last*100+middle*10+first;
	
	if(num==reverse)
	   printf("given number is pallindrome");
	
	else
	printf("given number is not pallindrome");
}