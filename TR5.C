// 543212345


void main()
{
	int i,j,n,sp=-1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	  for(j=1;j<=i;j--)
		printf("%2d",j);
	  for(j=1;j<=sp;j++)
		printf(" ");

	   sp+=2;
	   for(i==1)
		   j=i+1;
	   else
		 j=i;

	   for( ;j<=n;j++)
	       printf("%2d",j);
	 }


      sp-=4;
      for(i=n;i>=1;i--)
       {
	   for(j=n;j>=i-1;j--)
		 printf("%2d",j);
	   for(j=1;j<=sp;j++)
		  printf(" ");

       sp=-2;
	   if(i==2)
		  j=i;
	   else
		 j=i-1;
	   for( ;j<=n;j++)
		  printf("%2d",j);
	   printf("\n");
       }
 }     getch();


