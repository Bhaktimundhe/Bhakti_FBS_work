#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="abcdef";
	printf("%s\n",(char*)memchr(s,'d',6));
}