#include<stdio.h>
void main ()
{
    int i,n,j,k;

    printf("enter n");
    scanf("%d",&n);
    k=1;
    for(i=1; i<=n; i++)
    {
        
        for(j=1; j<=i; j++)
        {
            printf("%5d",k);
            k++ ;
        }
        printf("\n");
    }
    getchar ();
}



