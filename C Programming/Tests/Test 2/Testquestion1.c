#include<stdio.h>
void main()
{
	int unit;
	printf("Enter units");
	scanf("%d",&unit);
	int totalbill;
	
	if(unit<=50)
	   totalbill=30*unit;
	else if(unit>=51&&unit<=150)
	   totalbill=40*unit;
	else if(unit<=151)
	   totalbill=50*unit;
	   
	printf("Total electricity bill is :%d",totalbill);      
	
	}