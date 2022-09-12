 // 101 102 103 105 108...n
 void main()
 {
	int a=1,b=0,s,i,n;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=a+b;
		printf("%d\t",s+100);
		a=b;
		b=s;
	 }
	 getch();
}