#include<stdio.h>
void store(int*,int);
void display(int*,int);
void alternate(int*,int);
void main() {

	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];

	printf("Enter elements of array a\n");
	store(a,size);
	printf("Entered elements of array a\n");
	display(a,size);
	alternate(a,size);
	
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
 void alternate(int*a,int size)
{
	printf("\nAlternate elements in an array are");
	for(int k=0; k<size; k=k+2) {
		printf(" %d ",a[k]);

}
}
