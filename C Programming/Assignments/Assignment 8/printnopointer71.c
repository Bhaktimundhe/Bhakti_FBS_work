#include<stdio.h>
void printnumbers(int*);
void main()
{   
    int x;
	printnumbers(&x);
}

void printnumbers(int*a)
{
	 *a=1;
	while(*a<=10)
	{
		printf(" %d\n",*a);
		(*a)++;
	}
}