#include<stdio.h>
#include<math.h>
void main() {
	int no=153,original,remainder,result=0,n=0;
	original=no;
	int temp=no;
	while(temp!=0) {
		temp/=10;
		n++;

	}
	temp=no;
	while(temp!=0) {
		remainder=temp%10;
		result=result+pow(remainder,n);
		temp/=10;
	}

	if(result==original)
		printf("%d is an armstrong number",original);

	else
		printf("%d is not an armstrong number",original);
}