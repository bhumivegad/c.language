// bitwise operaters

#include<stdio.h>
#include<conio.h>

void main()
{
	int a=22,b=13;
	clrscr();
	printf("bitwise AND=%d",a&b);
	printf("\n bitwise OR=%d",a&b);
	printf("\n bitwise XOR=%d",a&b);
	printf("\n shift RIGHT=%d",a>>b);
	printf("\n shift LEFT=%d",a<<b);
	peintf("\n 1\'s completment=%u",~a);
	getch();
}