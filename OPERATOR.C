void main()
{
	 int a;
	 clrscr();
	 printf("Enter a no :");
	 scanf("%d" ,&a);
	 a>0? printf("%d is positive",a):
	 a<0?printf("%d is negative",a):
	 printf("%d is zero",a);
	 getch();
}