#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]=("Bhakti");
	char str2[]=("Mundhe");
int res=(strlen(str1));
int res2=(strlen(str2));
//finds length of the string without \0
printf("Length of string 1 is %d\n",res);
printf("Length of string 2 is %d\n",res2);

int copy=strcpy(str1,str2);
//copy one string to other
printf("String after copy str1=%s and str2=%s",str1,str2);
}