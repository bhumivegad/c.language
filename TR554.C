//5 54 543 5432 54321...

void main()
{
	int n,i,j;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("");
		for(j=n;j>=i;j--)
		printf("%2d",j);
		printf("\n");
	}

	getch();
}