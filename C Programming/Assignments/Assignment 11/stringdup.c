#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s1[]="Hello";
	char *s2=strdup(s1);
	//dulpicates the string or creates the new copy of string in memory
	printf("\nOriginal=%s",s1);
	printf("\nDuplicate=%s",s2);
	free(s2);
	
	
}