//Armstrong //

#include<stdio.h>
void main ()
{
    int n,a,b=0,x;

    printf("enter n");
    scanf("%d",&n);
    x=n;
    while(n>0)
      {
        a=n%10;
        b=b+a*a*a;
        n=n/10;
      }
        if(b==x)
        {
          printf("Armstrong no");
        }
        else
        {
           printf("not no.");
        }
        
     getcha();
    
    
    
 }

    
