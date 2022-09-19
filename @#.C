//@#  @#@....//

void main()
{

	int n,i,j;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			 if(j%2==0)
				 printf("@");
			 else
				 printf("#");
		 }
		 printf("\n");
	  }
	  getch();
}