#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="Hello123";
	printf("%lu\n",strcspn(s,"o"));
}
	