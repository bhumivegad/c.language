// call by value & call by refernce
void swap(int x,int y);
void swap1(int *x,int *y);
void main()
{
	int a,b;
	clrscr();
	printf("enter two no:");
	scanf("%d %d",&a,&b);
	printf("\n before call by refernce");
	printf("\n before call by value");
	printf("\n a=%d \t b=%d");
	swap(a,b);

	printf("\n after calling:");
	printf("\n a=%d \t b=%d",a,b);
	printf("\n before calling");
	printf("\n a=%d \t b=%d",a,b);

	swap1(&a,&b);
	printf("\n after calling:");
	printf("\n a=%d \t b=%d",a,b);

	getch();
 }

 void swap(int x,int y)
 {
	int z;
	z=x;
	x=y;
	y=z;
	printf("\n inside swap function a=%d \t b=%d",x,y);
 }
 void swap1(int *x, int *y)
 {
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("\n inside swap1 function a=%d \t b=%d",*x,*y);
 }