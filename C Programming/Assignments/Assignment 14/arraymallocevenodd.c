#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
void evenodd(int *,int);
void main()
{
	int size,element;
	printf("Enter size of array");
	scanf("%d",&size);
	int *arr=createArray(size);
	evenodd(arr,size);
}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}
void evenodd(int*a,int size)
{
	printf("Even numbers in an array are");
	for(int j=0; j<size; j++) {
		if(a[j]%2==0)
		printf(" %d ",a[j]);
 }
 printf("\n");
   printf("Odd numbers in an array are");
   for(int k=0;k<size;k++)
   {
   	if(a[k]%2!=0)
   	printf(" %d ",a[k]);
	   	 }  
}