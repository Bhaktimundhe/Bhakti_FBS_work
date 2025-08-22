#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
int *mergeArrays(int*,int,int*,int);
void main()
{
	int s1,s2;
	
	printf("Enter size of first array\n");
	scanf("%d",&s1);
	int *arr=createArray(s1);
	
	printf("\nEnter size of second array\n");
	scanf("%d",&s2);
	int *brr=createArray(s2);
	
	int*crr=mergeArrays(arr,s1,brr,s2);
	
	printf("Merged Array is ");
	for(int i=0;i<s1+s2;i++)
	{
		printf(" %d ",crr[i]);
	}
	printf("\n");
}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf(" %d ",&arr[i]);

	}
	return arr;
}
int*mergeArrays(int*a,int s1,int*b,int s2)
{
	int*crr=(int*)malloc(sizeof(int)*(s1+s2));
	
	for(int i=0;i<s1;i++)
	{
	crr[i]=a[i];
}
	for(int i=0;i<s2;i++)
	{
	crr[s1+i]=b[i];
}
	return crr;
}






