#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	strxfrm(s,"abc",20);
	printf("%s",s);
}