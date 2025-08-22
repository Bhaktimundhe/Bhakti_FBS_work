#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
int *addArrays(int*,int*,int);
void main()
{
	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("First array\n");
	int *arr=createArray(size);
	printf("Second array\n");
	int *brr=createArray(size);
	int *crr=addArrays(arr,brr,size);
	
	printf("Resultant Array\n");
	for(int i=0;i<size;i++)
	{
		printf(" %d ",crr[i]);
	}
	printf("\n");

}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}
int *addArrays(int*a,int*b,int size)
{
	int*c=(int*)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++)
	{
		c[i]=a[i]+b[i];
	}
	return c;
}
	