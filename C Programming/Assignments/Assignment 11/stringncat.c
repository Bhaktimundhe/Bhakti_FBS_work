#include<stdio.h>
#include<string.h>
void main()
{
	char str1[15]="Bhakti";
	char str2[15]="Mundhe";
	//concatenates only first n characters 
	strncat(str2,str1,4);
	printf("%s \n",str2);
}