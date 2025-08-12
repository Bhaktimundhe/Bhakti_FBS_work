#include<stdio.h>
void printtable(int*);
void main()
{
	int no;
	printtable(&no);
}

void printtable(int*p)
{
	 *p =5;
	int i=1;
	while(i<=10)
	{
		
	
	printf("%d*%d=%d \n",*p,i,(*p)*i);
	i++; 
}
}