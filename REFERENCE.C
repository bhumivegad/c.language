 #include<stdio.h>
 void swap(int a,int b);
 void main()
 {
	int a;
	int b;
	clrscr();
	printf("enter two no:");
	scanf("%d %d",&a,&b);
	printf("\n before call by reference:");
	printf("\n a=%d \t b=%d");
	swap(a,b);
	printf("\n after calling:");

 }
 void swap(int a, int b)
 {
   int c;
   c=a;
   a=b;
   b=c;
   printf("\n inside swap funtion a=%d \t b=%d",a,b,c);
}
