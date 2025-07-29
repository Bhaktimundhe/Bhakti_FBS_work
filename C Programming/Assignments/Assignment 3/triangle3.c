#include<stdio.h>
void main() {
	int a,b,c;
	printf("Enter three sides of triangle");
	scanf("%d%d%d",&a,&b,&c);

	if (a==b && b==c && a==c)
		printf("Triangle is equilateral triangle");

	else if(a!=b && b!=c && a!=c)
		printf("Triangle is scalene triangle");

	else if (a=b && b!=c && a!=c)
		printf("Triangle is isoscales triangle");

	else
		printf("incorrect input");

}