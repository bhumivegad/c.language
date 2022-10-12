// total units & calculate and print light bill
As per below condition.

#include <stdio.h>
int main()
{
    int unit;
    float amt;
    Clrscr();
   printf("Enter total units : ");
    scanf("%d", &unit);
    if(unit <= 50)
    {
	amt = unit * 2.7;
    }
    else if(unit <= 50)
    {
	amt = ((unit-50) * 3.60+135);
    }
    else if(unit <= 100)
    {
	amt = ((unit-100) * 4.10 +135 +180);
    }
    else
    {
	amt = ((unit-200) * 4.70 +135+180+410);
	    }
    printf("Electricity Bill = Rs. %.2f",amt);

    getch();
}
