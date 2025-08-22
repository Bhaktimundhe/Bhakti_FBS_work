#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
void searchElement(int *,int,int);
void main()
{
	int size,element;
	printf("Enter size of array");
	scanf("%d",&size);
	
	int *arr=createArray(size);
	printf("Enter element you want to search");
	scanf("%d",&element);
	
	searchElement(arr,size,element);
	
}

int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}

void searchElement(int *a,int size,int element)
{
	int found=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]==element)
		{
			printf("Element %d found at index %d \n ",element,i);
			found=1;
			break;
		}
		
	}
	if(!found)
	printf("Element is not found ");
}