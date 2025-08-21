#include<stdio.h>
int isprime(int );
void main() {
	int a[10];
	printf("Enter 10 elements of array");

	for(int i=0; i<10; i++) {
		scanf("%d",&a[i]);
	}
	printf("Entered 10 elements of array are:\n");

	for(int j=0; j<10; j++) {
		printf( " %d ",a[j]);
	}
	printf("\n");
	printf("Prime numbers in array are");
	int flag=0;
	for(int i=0; i<10; i++) {
		if(isprime(a[i])) {
			printf(" %d ",a[i]);
			flag=1;
		}
	}

	if(!flag)
		printf("No prime number is found in an array");
}

int isprime(int no) {
	if(no<=1)
		return 0;

	for(int i=2; i*i<=no; i++) {
		if(no%i==0)
			return 0;
	}
	return 1;
}