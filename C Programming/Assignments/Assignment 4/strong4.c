#include<stdio.h>
void main()
{
   int no=145;
   int temp,digit,sum=0;
   temp=no;
   
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
   
   if (sum==no)
      printf("Number is strong");
      else
      printf("Number is not strong");
}