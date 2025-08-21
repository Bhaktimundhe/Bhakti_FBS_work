#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10]="hello";
	char*p=strchr(str1,'l');
	//finds first occurence of the character
	printf("%s",p);
}