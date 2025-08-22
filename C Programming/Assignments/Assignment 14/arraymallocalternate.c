#include<stdio.h>
#include<stdlib.h>
int *createArray(int );
void alternate(int *,int);
void main()
{
	int size,element;
	printf("Enter size of array");
	scanf("%d",&size);
	int *arr=createArray(size);
	alternate(arr,size);
}
int *createArray(int size) {
	int *arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d elements of array",size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);

	}
	return arr;
}
void alternate(int*a,int size)
{
	printf("Alternate elements in an array are");
	for(int k=0; k<size; k=k+2) {
		printf(" %d ",a[k]);

}
}