// upper case letter OR lower case letter OR white space OR digit OR symbol:
#include<ctype.h>

void main ()
{
	char c;
	clrscr();
	printf("enter a character:");
	scanf("%c",&c);
	if(is upper (c))
	    printf("%c is upper case letter",c);
	else if(islower(c))
	    printf("%c is lower case letter",c);
	else if(isdigit(c))
	    printf("%c is digit",c);
	else if(isspace(c))
	    printf("%c is space",c);
	else
	    printf("%c is symbol",c);
    getch();
}
