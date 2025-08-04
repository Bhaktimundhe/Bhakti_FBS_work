#include<stdio.h>
void main()
{
	int no=28;
	int i=1,sum=0;
	
	while(i<no) 
	{
	
	if(no%i==0)
		sum=sum+i;
	i++;
    }
    if(sum==no&&no!=0)
    printf("%d is a perfect number",no);
    else
    printf("%d is not a perftct number",no);

}