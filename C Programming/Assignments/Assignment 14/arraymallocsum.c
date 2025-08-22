#include<stdio.h>
#include<stdlib.h> 
void sumArray(int*,int);
int *createArray(int );
void main()
{
	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	
	int *arr=createArray(size);
	sumArray(arr,size);
}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}
void sumArray(int*a,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of all elements of array is %d",sum);
}