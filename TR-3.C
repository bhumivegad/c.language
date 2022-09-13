//123454321
//1234 4321
void main()
{
	int n,i,j,sp=-1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%2d",j);
		for(j=1;j<=sp;j++)
			printf(" ");
		sp+=2;

		if(i==n)
		    j=i-1;
		else
		     j=i;
		for( ;j>=1;j--)
			printf("%2d",j);
	       printf("\n");
	 }
	 getch();
}

