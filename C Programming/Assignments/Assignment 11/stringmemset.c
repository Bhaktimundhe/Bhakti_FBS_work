#include<stdio.h>
#include<string.h>
void main()
{
	char s[10];
	memset(s,'*',6);
	//fill memory with a character
	//s[5]='\0';
	printf("%s",s);
}