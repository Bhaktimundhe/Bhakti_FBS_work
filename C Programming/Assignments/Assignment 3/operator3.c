#include<stdio.h>
void main() {
	int a,b;
	char operator;

	printf("Enter any two numbers and ( +,-,/,*,%%)any of these operators");
	scanf("%d%d %c",&a ,&b, &operator);

	if (operator =='+')
		printf("+ This operator is used for addtion:%d+%d=%d\n",a,b,a+b);

	else if (operator=='-')
		printf("- This operator is used for subtraction:%d -%d= %d\n",a,b,a-b);

	else if (operator=='/')
		printf("/ This operator is used for division:%d /%d= %d\n",a,b,a/b);

	else if (operator=='*')
		printf("+ This operator is used for multiplication:%d *%d= %d\n",a,b,a*b);
		
	else if (operator=='%')
	     printf("% This operator is used for modulus:%d %% %d= %d\n ",a,b,a%b);	

	else
		printf("Invalid input");
}


