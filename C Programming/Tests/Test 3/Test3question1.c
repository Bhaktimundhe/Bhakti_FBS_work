#include<stdio.h>
void main() {
	int start,end;
	printf("Enter start and end");
	scanf("%d%d",&start,&end);

	printf("Even numbers are \n");
	for(int i=start; i<=end; i++) {
		if(i%2==0)
			printf("%d ",i);
	}
	printf("\n");
	printf("Odd numbers are \n");
	for(int i=start; i<=end; i++) {
		if(i%2!=0)
			printf("%d ",i);

	}





}
