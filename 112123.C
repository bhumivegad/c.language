// peramid
//	1	12	123	1234...


 void main()
 {
	int n,i,j;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
		for(j=1;j<=i;j++)
		  printf("%d\t",j);
		  printf("\n");
	}
	getch();
}


