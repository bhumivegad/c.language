//-1 0 1 2 3 5 8 13 21...n
void main()
{
	int a=-1, b=1, s,i,n;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=a+b;
		printf("%d\t",s);
		a=b;
		b=s;
	}
	getch();
}