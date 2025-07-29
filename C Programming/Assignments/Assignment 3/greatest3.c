#include<stdio.h>
void main()
{
	int a,b,c;
	
 	 printf("Enter any three number");
	 scanf("%d%d%d",&a,&b,&c);
	 
	if(a>b&&a>c)
	  printf("a is greatest number among three");
	  
	else if (b>a&&b>c)
	  printf("b is greatest digit among three");
	  
	else
	  printf("c is greatest digit among three");     
	
}