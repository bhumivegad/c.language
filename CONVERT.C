// input a char wap that convert upper case letter into lowercase letter: lower case letter into uppercase letter.

#include<ctype.h>

void main()
{
	char b,c;
	clrscr();
	printf("enter the charcter :");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	    b=c+32;
	else if(c>=97&&c<=122)
	    b=c-32;
	else
	   b=c;
	   printf("%c is now %c",c,b);
	getch();
 }

