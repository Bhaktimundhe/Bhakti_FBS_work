#include<stdio.h>
void getprice();
 void main()
 {
 	getprice();
 }
void getprice()
 {
 	float cost_price;
 	printf("Enter the price of the book");
 	scanf("%f",&cost_price);
 	
 	float selling_price;
 	
 	
 	if(cost_price>500)
 	{
 	selling_price=cost_price-cost_price*0.30;
	 printf("Selling price of book after discount is %f",selling_price);	
	 }
	else
	{
	selling_price=cost_price-cost_price*0.10;
	printf("Selling price of book after discount is %f",selling_price);
 }
}