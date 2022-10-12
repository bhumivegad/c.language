// annual income &cal and print incom tax
   As par blow condition

#include<stdio.h>
#include<conio.h>

void main()
{	
    float ai,tax;
    clrscr();
    printf("Enter annual income");
    scanf("%f",&ai);
    if(ai<=110000)
    tax=0;
    else if(ai<=150000)
        tax=(ai-110000)*10/100;
    else if(ai<=300000)
        tax=(ai-150000)*20/100+4000;
     else if(ai<=500000)
      tax=(ai-300000)*30/100+4000+30000;
      else
tax=(ai-500000)*40/100+4000+30000+60000;
printf("\n tax=%2f",tax);
  getchar();
}
   
