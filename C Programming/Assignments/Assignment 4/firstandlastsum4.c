#include<stdio.h>
void main() {
	int no=12345;
	int fd,ld;
	ld=no%10;
	fd=no;
	while(fd>=10)
		fd=fd/10;
	int sum=fd+ld;
	printf("sum of first and last digit is %d",sum);

}