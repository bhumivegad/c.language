// 5 4 3 2 1
     4 3 2 1
        3 2 1
           2 1
             1


#include<stdio.h>
void main ()
{
    int i,n,j;

    printf("enter n");
    scanf("%d",&n);
    
    for(i=n; i>=1; i--)
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



    
