#include<stdio.h>
void isperfect(int*);
void main() {
	int no,res;
	printf("Enter a number");
	scanf("%d",&no);

	isperfect(&no);
}
void isperfect(int*a) {
	int sum=0;

	for(int i=1; i<=*a/2; i++) {
		if(*a%i==0) {
			sum=sum+i;

		}
	}
	if(sum==*a && *a!=0)
		printf("%d is a perfect number\n",*a);
	else
		printf("%d is not a perfect number",*a);



}