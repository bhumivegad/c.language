// special operater

void main()
{
	long double a;
	int b,c,d;
	clrscr();
	printf("\n var.a occupy %d bytes",sizeof (a));
	d=b=c=30;
	printf("\n b=%d \t c=%d \t d=%d",b,c,d);
	b=(c=5, d=10, c+d);
	printf("\n b=%d \t c=%d \t d=%d",b,c,d);
	getch();
}