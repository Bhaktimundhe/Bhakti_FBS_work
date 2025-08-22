#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],ch;
	int i,found=0;
	printf("Enter string \n");
	scanf("%s",&str);
	
	printf("Enter character to search\n");
	scanf(" %c",&ch);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
		{
		
		found=1;
		break;
	}
	}
	
	if(found)
	printf("Character is found in string\n");
	else 
	printf("Character is not found in string\n");
}