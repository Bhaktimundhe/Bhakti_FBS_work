#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter a string");
	scanf("%[^\n]",&str);
	
	int words=0;
	int inword=0;
	
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
		{
			inword=0;
		}
		else if(inword==0)
		{
			inword=1;
			words++;
		}
	}
	printf("Number of words=%d\n",words);
}
