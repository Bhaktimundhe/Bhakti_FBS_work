#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int pos,i;
	printf("Enter a string");
	scanf("%s",&str);
	
	printf("Enter position to remove");
	scanf("%d",&pos);
	
	for(i=pos;str[i]!='\0';i++)
	{
		str[i]=str[i+1];
		
	}
	printf("Modified string %s",str);
}