#include<stdio.h>
void main()
{
	float basic,da,ta,hra,total;
	 
	printf("enter basic salary");
	scanf("%f",&basic);
	
	if(basic<=5000)
	{
	 da = basic*0.10;
	 ta = basic*0.20;
	 hra = basic*0.15;
    }
   else
	{
     da = basic*0.15;
     ta = basic*0.25;
     hra = basic*0.30;
	}
	total = basic + da + ta + hra;
	printf("total salary %f",total);
	
}