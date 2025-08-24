#include<stdio.h>
void main()
{
	int range,i=2,flag,j;
	printf("Enter the range");
	scanf("%d",&range);
	 
	 printf("Prime numbers from 1 to %d are\n",range);
	 
	while(i<=range)
	{
		flag=0;
		j=2;
		while(j<=i/2)
		{
		if(i%j==0)
		{
				
			flag=1;
			break;
		}
		j++;
		}
		
	if(flag==0)
	printf(" %d ",i);
	
	i++;	
	}
	printf("\n");
	
	
}