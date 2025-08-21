#include<stdio.h>
void main() {
	int a[10],max;
	printf("Enter 10 elements of array");
	
	for(int i=0; i<10; i++) {
		scanf("%d",&a[i]);
	}
    printf("Entered 10 elements of array are:\n");
    
	for(int j=0; j<10; j++) {
		printf( " %d ",a[j]);

	}
	printf("\n");
	max=a[0];
	int min=a[0];
	for(int k=0; k<10; k++) {

		if(a[k]>max)
			max=a[k];

		if(a[k]<min)
			min=a[k];
	}
	printf("Maximum number in array is %d\n",max);
	printf("Minimum number in array is %d\n",min);



}

