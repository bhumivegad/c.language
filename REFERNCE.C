 #include<stdio.h>
 void swap(int a,int b);
 void main()
 {
	int a;
	int b;
	clrscr();
	printf("enter two no:");
	scanf("%d %ld",&a,&b);
	printf("\n before call by refernce:");
	printf("\n a=%d \t b=%ld");
	swap(a,b);
	printf("\n after calling:");

 }
 void swap(int a, int b)
 {
   int c;
   c=a;
   a=b;
   b=c;
   printf("\n inside swap funtion a=%d \t b=%ld",a,b,c);
}
