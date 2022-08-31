//volume of cylinder v=3.14r2h

#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
	double r,h,v;
	clrscr();
	printf("enter value of r,h");
	scanf("%lf %lf",&r,&h);
	v=PI*r*r*h;
	printf("vocy is %lf",v);
	getch();
 }