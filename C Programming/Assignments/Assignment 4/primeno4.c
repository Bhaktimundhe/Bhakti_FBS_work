#include<stdio.h>
void main() {
	int no=21;
	int i=2, isprime=1;

	if(no<=1) {

		isprime=0;//0 and 1 are not prime number
	} else {
		while(i*i<=no) {
			if(no%i==0) {

				isprime=0;
				break;
			}
			i++;
		}
	}
	



	if(isprime==1)
		printf("%d is a prime number",no);
	else
		printf("%d is not a prime number",no);
}