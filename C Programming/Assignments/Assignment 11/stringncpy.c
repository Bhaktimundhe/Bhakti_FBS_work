#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20]="Programming";
	char str2[20]="Java";
	int copy=strncpy(str2,str1,3);
	//copies only first n characters 
	printf("String after copy:\n str1=%s \n str2=%s",str1,str2);
    
    
}
