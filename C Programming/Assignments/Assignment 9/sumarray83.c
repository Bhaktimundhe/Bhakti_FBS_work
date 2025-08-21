#include<stdio.h>
void main() {
	int a[10];
	printf("Enter 10 elements of array");
	
	for(int i=0; i<10; i++) {
		scanf("%d",&a[i]);
	}
    printf("Entered 10 elements of array are:\n");
    
	for(int j=0; j<10; j++) {
		printf( " %d ",a[j]);
}
printf("\n");
     int sum=0;
    for(int i=0;i<10;i++)
    {
      sum=sum+a[i];	
	}
    printf("Sum of all elements of array is %d",sum);

}