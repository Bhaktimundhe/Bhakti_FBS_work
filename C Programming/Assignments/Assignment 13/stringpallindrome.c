#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter a string");
	gets(str);
	
	int len=strlen(str);
	int isPallindrome=1;
	
	for(int i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			isPallindrome=0;
			break;
		}
	}
	if(isPallindrome)
	printf("The string is pallindrome");
	else
	printf("The string is not pallindrome");
}