#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],result[100];
	printf("Enter a string");
	gets(str);
	
	int j=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(i%2==0)
		result[j++]=str[i];
		
	}
	result[j]='\0';
	printf("String after removing odd index characters %s",result);
}