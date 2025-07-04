#include<stdio.h>
void main()
{
	int a = 5;
	int b = 7;
	int c = a;
	a = b;
	b = c;
	printf("values after swapping are %d and %d",a,b);
}