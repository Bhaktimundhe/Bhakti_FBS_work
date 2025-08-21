#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={10,20,30,40,50};
	int sum[5];
	
	for(int i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");
	for(int j=0;j<5;j++)
	{
		printf(" %d ",b[j]);
	}
	printf("\n");
	
	for(int k=0;k<5;k++)
	{
		sum[k]=a[k]+b[k];
		printf(" %d ",sum[k]);
		
	}
	
}