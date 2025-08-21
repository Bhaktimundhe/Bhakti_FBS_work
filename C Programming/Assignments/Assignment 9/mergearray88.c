#include<stdio.h>
void main()
{   int size;
	int a[size];
	
	printf("Enter size of array");
	scanf("%d",&size);
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<size;j++)
	{
		printf("%d",a[j]);
	}
}