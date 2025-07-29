#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	
	if (age<12)
	    printf("you are children");
	    
	else if (age>=12 && age<19)
	    printf("you are teenager");
		
	else if (age>=20 && age<59)
	    printf("you are adult");
		
	else if (age>=60)
	    printf("you are senior");	  
}