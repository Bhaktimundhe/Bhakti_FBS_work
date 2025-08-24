#include<stdio.h>
void store(int*,int);
void display(int*,int);
void maximum(int*,int);
void minimum(int*,int);

void main() {

	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int a[size];

	printf("Enter elements of array a\n");
	store(a,size);
	printf("Entered elements of array a\n");
	display(a,size);
	maximum(a,size);
	minimum(a,size);
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

void maximum(int *a,int size) {
	int max=a[0];

	for(int k=0; k<size; k++) {

		if(a[k]>max)
			max=a[k];
	}
	printf("\nMaximum number in array is %d\n",max);
}
void minimum(int *a,int size) {
	int min=a[0];
	for(int k=0; k<size; k++) {


		if(a[k]<min)
			min=a[k];
	}
	printf("Minimum number in array is %d\n",min);

}
