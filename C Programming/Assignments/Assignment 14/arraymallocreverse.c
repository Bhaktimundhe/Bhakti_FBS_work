#include<stdio.h>
#include<stdlib.h>
 void storearray(int*,int) ;
 void display(int *,int);
 int *reverseArray(int*,int);
void main()
{
	int arr[10];
	storearray(arr,10);
	display(arr,10);
	
	int * rev = reverseArray(arr,10);
	
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
int *reverseArray(int*p,int size)
{
	
	
	int *a=(int*)malloc(sizeof(int)*10);
	for(int i=0;i<size;i++)
	{
		a[i]=p[size-1-i];
	}
	return a;
}
