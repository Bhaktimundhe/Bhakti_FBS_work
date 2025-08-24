#include<stdio.h>
void main()
{
	int range;
	int i,sum,no;
	printf("Enter the range");
	scanf("%d",&range);
	printf("Perfect numbers from 1 to %d are\n",range);
	no=1;
	
	
	while(no<=range) 
	{
	sum=0;
	i=1;
	
	while(i<no)
	{
		if(no%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==no && no!=0)
	printf(" %d ",no);
	no++;
}
}