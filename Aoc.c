//Area of circal 

#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	double r,aoc;
	clrscr();
	printf("Enter value of r");
	scanf("%lf",&r);
	aoc=PI*r*r;
	printf("aoc is %lf",aoc);
	getch();
}
