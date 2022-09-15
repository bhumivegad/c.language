#include<stdio.h>
void main ()
{
    int i,n,j,s,a=-1,b=1;

    printf("enter n");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        
        for(j=1; j<=i; j++)
        {
             
            s=a+b;
            printf("%5d",s);
            a=b;
            b=s;
        }
        printf("\n");
    }
    getchar ();
}



    
