#include<stdio.h>
#include<string.h>
void main()
{
    char str1[15]="Bhakti";
	char str2[15]="Mundhe";
	
	strcat(str2,str1);
	//concatenates (joins )strings
    printf("%s \n",str2);
}