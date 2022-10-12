// 71

void main()
{
	int a[2][3],r[2]={0},c[3]={0},i,j;
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("enter a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d \t",a[i][j]);

	}
	printf("%d \n",r[i]);
}
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		r[i]+=a[i][j];
		c[j]+=a[i][j];
	}
}
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d \t",a[i][j]);
	}
	printf("%d\n",r[i]);
}
for(i=0;i<3;i++)
	printf("%d\t",c[i]);
  getch();
}