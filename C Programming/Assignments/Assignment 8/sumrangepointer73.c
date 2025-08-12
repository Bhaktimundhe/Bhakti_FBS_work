#include<stdio.h>
void getsum(int,int,int*);
void main()
{
	int start,end,sum;
	printf("Enter start and end");
	scanf("%d%d",&start,&end);
	
	getsum(start,end,&sum);
	printf("%d",sum);
}

void getsum(int start,int end,int*sum)
{
	 *sum=0;
	 int i=start;
	 
	 while(i<=end)
	 {
	 	*sum=*sum+i;
	 	i++;
	 }
	
	
	
}