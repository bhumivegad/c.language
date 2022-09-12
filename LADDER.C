//else if ladder:

#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter a no");
	scanf("%d",&a);
	if(a==0)
	      printf("%d is zero",a);
	else if(a>0)
	      printf("%d is +ve",a);
	else
	      printf("%d is -ve",a);

	 getch();
}
