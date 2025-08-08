#include<stdio.h>
void main()
{

	int start,end,sum=0;
	printf("Enter start and end");
	scanf("%d%d",&start,&end);
	
	for(int i=start;i<=end;i+=2)
	{
		sum=sum+i;
	}
	printf("sum = %d",sum);
}