// nested
#include<stdio.h>
#include<conio.h>
void main()
{
	int b;
	clrscr();
	printf("enter a no");
	scanf("%d",&b);
	if(b!=0)
	{
	  if(b>0)
	      printf("%d is +ve",b);
	  else
	     printf("%d is _ve",b);
	}
	 else
	     printf("%d is zero",b);
	   getch();
 }