//pyramid
//5	54	543....
void main()
{
	int n,i,j;
	clrscr();
	printf("enetr n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		printf("%d\t",j);
		printf("\n");
	}
	getch();
}
