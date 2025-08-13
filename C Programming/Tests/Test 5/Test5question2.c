#include<stdio.h>
void displayamount();
void main()
{
	displayamount();
}
void displayamount()
{
	long int amount;
	long int deposit=0;
	long int withdraw=0;
	long int totalamount;
	
	printf("Enter your amount in the account");
	scanf("%ld",&amount);
	
	int choice =printf("press 1 for withdraw or press 2 for deposit %d \n",choice);
	scanf("%d",&choice);
	
	if(choice==1)
	{
	  	
	  printf("Enter amount to withdraw \n");	
	  scanf("%ld",&withdraw);
	  
	  if(amount>3000)
	  {
	  	totalamount=amount-withdraw;
	  	printf("Your amount after withdraw is %ld \n",totalamount);
	  }
	  else
	  printf("can't withdraw the amount ,balance is not sufficient\n");
	}
	if(choice==2)
	{
		
		printf("Enter amount to deposit \n");
		scanf("%ld",&deposit);
		totalamount=amount+deposit;
		printf("Your account balance after deposit is %ld\n",totalamount);
		
	}
	
}