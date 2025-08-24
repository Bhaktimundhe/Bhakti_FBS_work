#include<stdio.h>
void store(int*,int);
void display(int*,int);
void sumArray(int*,int);
void main() {
	
	int size,element;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];

	printf("Enter elements of array a\n");
    store(a,size);
	printf("Entered elements of array a\n");
	display(a,size);
	sumArray(a,size);
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
void sumArray(int*a,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("\nSum of all elements of array is %d\n",sum);
}