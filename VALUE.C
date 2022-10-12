 #include<stdio.h>
 void swap(int x,int y);
 void main()
 {
	int a;
	int b;
	clrscr();
	printf("enter two no:");
	scanf("%d %d",&a,&b);
	printf("\n before call by value:");
	printf("\n a=%d \t b=%d",a,b);
	swap(a,b);
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
   printf("\n inside swap funtion a=%d \t b=%d",x,y);
}
