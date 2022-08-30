//volume of pyramid
#include<stdio.h>
#include<conio.h>
void main()
{
	double l,w,h,vop;
	clrscr();
	printf("enter value of",vop);
	scanf("%lf %lf %lf",&l,&w,&h);
	vop=l*w*h/3;
	printf("vop is %lf",vop);
	getch();
 }