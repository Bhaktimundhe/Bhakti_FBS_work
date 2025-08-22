#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],temp;
	int i;
	printf("Enter a string");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		str[i]='*';
		
	}
	printf("Modified string is %s",str);
}
	