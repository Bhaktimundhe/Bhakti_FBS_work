#include<stdio.h>
void main()
{
	char ch ;
	
	  printf("enter any charcter");
	  scanf("%c", &ch);
	  
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' )
	  printf("given charcter is vowel");
	  
	else 
	  printf("given charcter is consonant");
}