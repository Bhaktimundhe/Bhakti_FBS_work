#include<stdio.h>
#include<math.h>
void armstrong(int*);
void main() {
	int no,res;
	printf("Enter a number");
	scanf("%d",&no);

	armstrong(&no);

}

void armstrong(int*a)
 {
	int originalno=*a;
	int sum=0;
	int count=0;

	int temp=*a;
	while(temp>0) {
		count++;
		temp=temp/10;
	}
	temp=*a;
	while(temp>0) {
		int num =temp%10;
		sum=sum+pow(num,count);
		temp=temp/10;
	}
	if(sum==originalno)
		printf("%d is Armstrong number\n",*a);
	else
		printf("%d is not Armstrong number",*a);

		
	

}

