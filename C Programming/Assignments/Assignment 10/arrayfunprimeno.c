#include<stdio.h>
void store(int*,int);
void display(int*,int);
void primeno(int *,int);
int isprime(int );

void main() {

	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];

	printf("Enter elements of array a\n");
	store(a,size);
	printf("Entered elements of array a\n");
	display(a,size);

	primeno(a,size);
}
void store(int*ptr,int size) {

	for(int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void display(int*x,int size) {
	for(int i=0; i<size; i++) {
		printf(" %d ",(x[i]));
	}
}
void primeno(int*a,int size) {
	printf("\nPrime numbers in array are");
	int flag=0;
	for(int i=0; i<size; i++) {
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
