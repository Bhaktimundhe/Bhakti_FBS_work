#include<stdio.h>
void main() {
	int a[10];
	printf("Enter 10 elements of array");

	for(int i=0; i<10; i++) {
		scanf("%d",&a[i]);
	}
	printf("Even numbers in an array are");
	for(int j=0; j<10; j++) {
		if(a[j]%2==0)
		printf(" %d ",a[j]);
 }
 printf("\n");
   printf("Odd numbers in an array are");
   for(int k=0;k<10;k++)
   {
   	if(a[k]%2!=0)
   	printf(" %d ",a[k]);
	   	 }  
}