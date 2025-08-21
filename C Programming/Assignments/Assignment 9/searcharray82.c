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
	
	int searchedelement;
	printf("Enter element you want to search ");
	scanf("%d",&searchedelement);
	
	int flag=0;
	for(int k=0;k<10;k++)
	{
		if(a[k]==searchedelement)
		{
		printf("Element %d found at index %d\n",searchedelement,k);
		flag=1;
		break;
}

	}
	if(!flag)
	printf("Element %d is not found in an array",searchedelement);
	
	
}
	