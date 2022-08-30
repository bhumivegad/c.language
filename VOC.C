//volume of cone
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main ()
{
	double r,h,voc;
	clrscr();
	printf("enter value of",r,h);
	scanf("%lf %lf",&r,&h);
	voc=PI*r*r*h/3;
	printf("voc is %lf",voc);
	getch();
}