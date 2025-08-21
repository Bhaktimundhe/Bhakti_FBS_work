#include<stdio.h>
#include<string.h>
void main()
{
//compare first n characters 
printf("%d\n",strncmp("abcd","abef",2));
printf("%d\n",strncmp("abcd","abef",4));
}