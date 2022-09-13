//54321	 5432	543	54	5
void main()
{
	int n,i,j;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		for(j=n;j>=i;j--)
		printf("%d\t",j);
		printf("\n");
	}
	getch();
}