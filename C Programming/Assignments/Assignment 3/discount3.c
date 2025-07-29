#include<stdio.h>
void main()
 {
	float price,totalprice;
	char isstudent;
	
	printf("Enter the price ");
	scanf("%f",&price);
	
	
	printf("Are you a student (y/n)");
	scanf(" %c",&isstudent);
	
	if(isstudent=='y') 
	{
		if(price>500)
			totalprice=price-price*0.20;
		else
			totalprice=price-price*0.10;
	} 
	else 
	{
	     if(price>600) 
	     	totalprice=price-price*0.15;
		 else
			totalprice=price;
    }
	printf("Total price after discount is %f",totalprice);
}
