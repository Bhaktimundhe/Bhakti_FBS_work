#include<stdio.h>
void store(int*,int);
void display(int*,int);
void evenodd(int *,int);

void main() {
	
	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];

	printf("Enter elements of array a\n");
    store(a,size);
	printf("Entered elements of array a\n");
	display(a,size);
	evenodd(a,size);
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
void evenodd(int*a,int size)
{
	printf("\nEven numbers in an array are");
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