//following series (using goto)

#include<studio.h>
void main()
{
    int n,i=0;
    Clrscr ();
    printf("enter a num");
    scanf("%d",&n);
    table:
    printf("\n %d *%d=%d",n,i,n*i);
    i++;
    if(i<=10)
     goto table;
      getch();
}

