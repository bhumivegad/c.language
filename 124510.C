//1 2 5 10 17 26...n
void main()
{
	int i,n,a=1,b=1;
	clrscr();
	printf("enetr n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
	     printf("%d\t",a);
	     a=a+b ;
	     b=b+2;
	}
	getch();
}