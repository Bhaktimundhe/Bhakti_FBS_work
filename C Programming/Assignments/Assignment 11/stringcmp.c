#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10]="Java";
	char str2[10]="java";
	
	int res=strcmp(str1,str2);
	//compare two strings
	printf("%d",res);
	if(res==0)
	printf("Equal\n");
	else if(res>0)
	printf("\nFirst string is greater");
	else 
	printf("\nSecond string is greater");
	

}