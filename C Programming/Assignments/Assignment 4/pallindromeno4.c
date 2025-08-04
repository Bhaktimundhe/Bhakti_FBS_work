#include<stdio.h>
void main()
{
	int no=122,remainder,original;
	int rev=0;
	original=no;
	
	while(no!=0)
	{
		remainder=no%10;
		rev=rev*10+remainder;
		no=no/10;
		
	}
	
	if(original==rev)
	   printf("%d is pallindrome",original);
	   else
	   printf("%d is not a pallindrome",original);	
	}