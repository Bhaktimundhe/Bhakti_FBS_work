#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str2[100];
	printf("Enter first string");
	gets(str);
	printf("Enter second string");
	gets(str2);
	
	int len=strlen(str);
	int len2=strlen(str2);
	
	if(len>len2)
	printf("Larger string is %s",str);
	else if (len2>len)
	printf("Larger string is %s",str2);
	else
	printf("Both string are equal");
}