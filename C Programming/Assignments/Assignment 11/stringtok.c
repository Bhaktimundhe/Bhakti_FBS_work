#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="black,white,red";
	char *token=strtok(str1,",");
	//splits string into tokens
	
	while(token!=NULL)
	{
		printf("%s\n",token);
		token =strtok(NULL,",");
	}
	
}