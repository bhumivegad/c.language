//1 3 5 7 9...n

void main()
{
	int i,n,b=1;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("\%d\t",b);
		b=b+2;
	}
	getch();
}