#include<stdio.h>
void main()
{
	int time;
	int hour;
	int totalsec;
	int totalmin;
	printf("Enter the time");
	scanf("%d",&time);
	hour=time/60;
	totalmin=time%60;
	totalsec=time*60;
	printf("hour=%d and totalmin=%d and totalseconds=%d",hour,totalmin,totalsec);
	
}