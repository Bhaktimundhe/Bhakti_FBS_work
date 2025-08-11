#include<stdio.h>
void main() {
	int no,pow;

	printf("Enter number and power");
	scanf("%d%d",&no,&pow);

	int power=1;
	printf("%d ^",no);
	for(int i=1; i<=pow; i++) {

		power=power*no;
	}
	
    printf( " %d = %d ",pow,power);
}