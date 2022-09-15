#include<stdio.h>
void main ()
{
    int i,n,j;

    printf("enter n");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
       
        for(j=n; j>=i; j--)
        {
          printf(" ");
        }
        for(j=i;j>=1;j--)
         {
            
            printf("%d",j);
         
            
        }
        printf("\n");
    }
    getchar ();
}



    
