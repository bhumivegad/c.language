//volume of sphere

#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
 {
	double r,vos;
	clrscr();
	printf("Enter value of",r);
	scanf("%lf",&r);
	vos=4/3*PI*r*r*r;
	printf("vos is %lf",vos);
	getch();
 }