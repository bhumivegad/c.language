

void main()
{
	int a[2][2],b[2][2],c[2][2], i,j,k;
	clrscr();
	printf("\ninput value in first matrix\n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
	    {
	       scanf("%d",&a[i][j]);
	     }
	 }
	 printf("\n input value in second matrix\n");
	  for(i=0;i<2;i++)
	  {
	      for(j=0;j<2;j++)
	      {
		scanf("%d",&b[i][j]);
	       }
	   }
	   for(i=0;i<2;i++)
	    {
		for(j=0;j<2;j++)
		{
		  for(k=0;k<2;k++)
		  c[i][j]+=a[i][k]*b[k][j];

		 }
	     }
	     printf("\n first matrix\n");
	     for(i=0;i<2;i++)
	     {
		for(j=0;j<2;j++)
			 printf("\d\t",b[i][j]);
		printf("\n");
	     }
	       printf("\n muliplicution matrix\n");
	       for(i=0;i<2;i++)
		  {
		     for(j=0;j<2;j++)
			 printf("%d\t",c[i][j]);
			 printf("\n");

		   }

	       getch();
	   }


