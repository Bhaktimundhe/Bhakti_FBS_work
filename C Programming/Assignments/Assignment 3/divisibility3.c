#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	
	if(no%3==0 && no%5!=0)
	   printf("Number is divisible by 3 and not 5");
	   
	else if(no%3!=0 && no%5==0)
	    printf("Number is not divisible by 3 but divisible by 5");
	    
	else if (no%3==0 && no%5==0)
	    printf ("Number is dividible by both 3 and 5");
		
    else 
	   printf("Number is divisible by none");    
	    
	      
	
}