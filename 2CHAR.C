#include<math.h>
void main()
{
	int n,m,p,s=1,c=2;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
	  c++;
	  n=n/10;


	}
	s=m*m;
	p=pow(10,c);
	n=s%p;
	if(m=n)
		printf("\n %d is murphy",m);
	  else
		printf("\n %d is not murphy",n);



getch();
}

