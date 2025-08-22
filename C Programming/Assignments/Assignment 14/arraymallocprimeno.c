#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
void primeno(int *,int);
int isprime(int );
void main()
{
	int size,element;
	printf("Enter size of array");
	scanf("%d",&size);
	int *arr=createArray(size);
	primeno(arr,size);
}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}
void primeno(int*a,int size)
{
	printf("Prime numbers in array are");
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


	