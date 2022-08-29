//circumference of a circle


#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
	double r,coc;
	clrscr();
	printf("enter value of r");
	scanf("%lf",&r);
	coc=2*PI*r;
	printf("coc is %lf",coc);
	getch();
}
	

