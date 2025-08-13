#include<stdio.h>
void isstrong(int*);
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	
	isstrong(&no);
	
}
void isstrong(int*a)
{
	int temp,digit,sum=0;
	temp=*a;
	
	 while(temp>0)
   {
   
   digit=temp%10;
   
   int fact=1;
   int i=digit;
   while(i>0)
   {
   
   fact=fact*i;
   i--;
   }
sum=sum+fact;
temp=temp/10;
   }
   
   if (sum==*a)
      printf("%d is strong number",*a);
      else
      printf("%d is not strong number",*a);
}