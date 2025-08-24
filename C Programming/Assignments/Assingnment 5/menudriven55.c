#include<stdio.h>
void main() {
	int no,choice=-1;
	printf("Enter a number\n");
	scanf("%d",&no);
     while(choice!=0) {
	printf("Press 1----->To check number is even or odd\n");
	printf("Press 2----->To check number is prime or not\n");
	printf("Press 3----->To check number is pallindrome or not\n");
	printf("Press 4----->To check number is positive,negative or zero\n");
	printf("Press 5----->To  reverse a number\n");
	printf("Press 6----->To find sum of digits\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
   
		if(choice==1) {
			if (no%2==0)
				printf("number  is even");

			else
				printf("number is odd");
		}  //evenodd code ends
		else if(choice==2) {
			int i=2,flag=0;
			while(i<=no/2) {
				if(no%i==0) {
					flag=1;
					break;
				}
				i++;
			}
			if(flag==0)
				printf("Number is prime ");
			else
				printf("Number is not prime");
		}//primeno code ends here
		else if(choice==3) {
			int rem,ori;
			int rev=0;
			ori=no;

			while(no!=0) {
				rem=no%10;
				rev=rev*10+rem;
				no=no/10;
			}
			if(ori==rev)
				printf("%d is pallindrome number",ori);
			else
				printf("%d is not a pallindrome number",ori);
		}//pallindrome no code ends here
		else if(choice==4) {
			if(no>0)
				printf("Number is positve");
			else if(no<0)
				printf("Number is negative");
			else
				printf("Number is zero");
		}//positiveno code ends here
		else if(choice==5) {
			int rem,ori;
			int rev=0;
			ori=no;
			while(no!=0) {
				rem=no%10;
				rev=rev*10+rem;
				no=no/10;
			}
			printf("Reverse of the number is %d",rev);
		}//reverse no code ends here
		else if (choice==6) {
			int sum=0;
			int temp=no;
			while(temp!=0) {
				sum=sum+temp%10;
				temp=temp/10;
			}
			printf("Sum of digits = %d",sum);
		}//sum of digits code ends here
		else if (choice==0)
			printf("Exit");
		else
			printf("Invalid choice");
			printf("\n");
	}
}

