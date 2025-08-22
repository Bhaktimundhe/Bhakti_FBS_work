#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
void sortArray(int *,int);
void main()
{
	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int *arr=createArray(size);
	sortArray(arr,size);
	
}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}
void sortArray(int*a,int size)
{
	for(int i=0;i<size-1;i++)
	{
	for(int j=0;j<size-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
		int temp=a[j];	
		a[j]=a[j+1];
		a[j+1]=temp;
		}	
	}
}
printf("Sorted Array is ");
for(int i=0;i<size;i++)
printf(" %d ",a[i]);

}