#include<stdio.h>
void store(int*,int);
void display(int*,int);
void sortArray(int *,int);
void main() {

	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];

	printf("Enter elements of array a\n");
	store(a,size);
	printf("Entered elements of array a\n");
	display(a,size);
    sortArray(a,size);
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
printf("\nSorted Array is ");
for(int i=0;i<size;i++)
printf(" %d ",a[i]);

}