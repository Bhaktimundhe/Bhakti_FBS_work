#include<stdio.h>
#include<math.h>
void main() {
	int n,num,rem,digits,i,power,temp,sum;

	printf("Enter the range");
	scanf("%d",&n);
	printf("Armstrong numbers between 1 to %d are\n",n);

	for(num=1; num<=n; num++) {
		temp=num;
		digits=0;
		while(temp>0) {
			temp=temp/10;
			digits++;
		}

		temp=num;
		sum=0;
		while(temp>0) {
			rem=temp%10;
			power=1;
			
			for(i=0; i<digits; i++) {
				power=power*rem;
			}
			sum=sum+power;
			temp=temp/10;
		}
		if(sum==num)
			printf("%d\n",num);

	}

}