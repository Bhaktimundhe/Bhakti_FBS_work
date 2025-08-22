#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
void maximum(int *,int);
void minimum(int *,int);

void main() {
	int size;
	printf("Enter size of array");
	scanf("%d",&size);

	int *arr=createArray(size);
	maximum(arr,size);
	minimum(arr,size);
}

void maximum(int *a,int size) {
	int max=a[0];

	for(int k=0; k<size; k++) {

		if(a[k]>max)
			max=a[k];
	}
	printf("Maximum number in array is %d\n",max);
}
void minimum(int *a,int size) {
	int min=a[0];
	for(int k=0; k<size; k++) {


		if(a[k]<min)
			min=a[k];
	}

	printf("Minimum number in array is %d\n",min);
}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}
