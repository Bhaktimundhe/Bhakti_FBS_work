#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="HelloWorld";
	memmove(s+5,s,5);
	//copy the block of memory safely (overlap allowed)
	printf("%s",s);
}