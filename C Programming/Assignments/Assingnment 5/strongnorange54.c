#include<stdio.h>
void isstrong(int);
void main() {
	int range;
	printf("Enter the range");
	scanf("%d",&range);
	isstrong(range);
}
void isstrong(int a) 
{
	int no=1,temp,sum,digit,fact,i;
	printf("Strong numbers from 1 to %d are \n",a);
	while(no<=a)
	 {
		temp=no;
		sum=0;
        while(temp>0) 
		{
			digit=temp%10;
			fact=1;
			i=1;
			
			while(i<=digit) 
			{
				fact=fact*i;
				i++;
				}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==no)
		printf(" %d ",no);
		no++;
	}
}