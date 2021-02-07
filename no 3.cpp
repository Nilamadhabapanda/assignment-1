#include<stdio.h>
#define PI 3.14
int main()
{
	int r,d;
	float area,cir;
	printf("enter the radius of the circle\n");
	scanf("%d",&r);
	d=2*r;
	printf("the diameter of the circle is %d\n",d);
	area=PI*r*r;
	printf("the area of the circle is %f\n",area);
	cir=2*PI*r;
	printf("the circumference of the circle is %f\n",cir);
}
