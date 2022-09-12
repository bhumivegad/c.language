// 1 2 6 24 120...
void main()
{
	int i,n,a=1,b=2;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a=a*b;
		b=b+1;
	 }
	 getch();
}

