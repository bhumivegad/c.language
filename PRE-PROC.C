
//pre-processer

//simple mirco
#define PI 3.14
//argumental macro
#define s(r) r*r
// nested marco
#define c(r) s(r)*r
void main()
{
	float x,a,v;
	printf("enter radius");
	scanf("%f",&x);
	a=PI*s(x);
	v=4*PI*c(x)/3;
	printf("\n area of circle %f",a);
	printf("\n area of sphere %f",v);
	getch();
}



