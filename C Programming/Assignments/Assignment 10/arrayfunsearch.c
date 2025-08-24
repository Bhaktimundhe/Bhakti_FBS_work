#include<stdio.h>
void store(int*,int);
void display(int*,int);
void searchElement(int*,int,int);
void main() {
	
	int size,element;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];

	printf("Enter elements of array a\n");
    store(a,size);
	printf("Entered elements of array a\n");
	display(a,size);
	
	printf("\nEnter element you want to search\n");
	scanf("%d",&element);
	
	searchElement(a,size,element);
	
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