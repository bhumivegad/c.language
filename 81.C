 #include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    char s[100];
    int i,j,b=0;
    clrscr();
    printf("enter the num :");
    gets(s);
    for(i=0;s[i];i++)
    {
	if(s[i]>=65 && s[i]<=90)
	  s[i]+=32;
     }
    printf("\n %s string in lowercase",s);
    for(i=0;s[i];i++)
    {
	if(s[i]>=97 && s[i]<=122)
	 s[i]-=32;
    }
    printf("\n %s in uppercase",s);
    for(j = 0; s[j]; j++)
    {
	if(s[j]>=0 && s[j]<=9)
	b++;
    }
    printf("\n Number of digits in string = %c",b);
    fflush(stdin);
    getch();
}