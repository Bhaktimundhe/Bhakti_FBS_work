#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="abc";
	char b[]="abd";
	//compare memory blocks
	printf("%d\n",memcmp(a,b,2));
	printf("%d\n",memcmp(a,b,3));
}