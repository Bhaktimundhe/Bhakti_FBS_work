
#include<stdio.h>
#include<stdlib.h>
void storearray(int*,int) ;
void display(int *,int);
void reverseArray(int*,int,int*);
void main() {
	int arr[10];
	int rev[10];
	storearray(arr,10);
	display(arr,10);
	reverseArray(arr,10,rev);
	display(rev,10);
}
void storearray(int*ptr,int size) {

	printf("Enter elements of array arr\n");
	for(int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}

void display(int*x,int size) {

	printf("\nEntered elements of array arr\n");
	for(int i=0; i<size; i++) {
		printf(" %d ",(x[i]));
	}

}
void reverseArray(int*p,int size,int*rev) {

	for(int i=0; i<size; i++) {
		rev[i]=p[size-1-i];
	}

}
