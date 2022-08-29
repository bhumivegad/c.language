// input an int no. w.a.p. that check whether the number is add, even or zero.

void main()
{
	int a;
	clrscr();
	printf("Enter a No");
	scanf("%d",&a);
	a==0 ? printf("%d is zero No",a):
	a%2==0?	printf("%d is even",a):printf("%d is odd No",a);

	getch();
}

