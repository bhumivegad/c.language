
// IF...ELSE
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,e,x,y,z;
  clrscr();
  printf("enter five no. :");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  if(a<b)
	x=a;
  else
	x=b;
  if(c<d)
	y=c;
  else
	y=d;
  if(x<y)
	z=x;
  else
	z=y;
  if(z<e)
	 printf("%d is smallest",z);
  else
	printf("%d is smallest",e);
     getch();
}
