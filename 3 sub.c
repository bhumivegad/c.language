//input 3 marks of 3sub. Total & average & all marks

#include<stdio.h>
void main ()
{
    int a,b,c,sum,avg;
    printf("enter three no");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    avg=(a+b+c)/3;
    printf("\n sum of three no=%d",sum);
    printf("\n avg=%d",avg);
    b=a;
    printf("\n b=%d",b);
    printf("\n %d",(int)a%2);
    getchar();
}

