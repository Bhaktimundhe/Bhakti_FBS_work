#include<stdio.h>
void main()
{
    int english = 93;
	int science = 98;
	int math = 97;
	int geography = 90;
	int history = 88;
	int total = english+science+math+geography+history;
	float percentage = (total/500.0)*100;
	printf("percentage is %f",percentage);
}