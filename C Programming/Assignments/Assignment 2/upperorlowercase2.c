#include<stdio.h>
void main()
{
	char ch;
	
	 printf("enter any character");
	 scanf(" %c",&ch);
	
	if(ch>='A'&& ch<='Z')
	   printf("the character is uppercase");
	
	 else if(ch>='a' && ch<='z')
	   printf("the character is lowercase");
	
	else
	   printf("the character is not an alphabet letter");
}