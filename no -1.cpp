#include<stdio.h>
int main()
{
	int a,b,mul,add,sub;
	float div;
	printf("enter the values of a and b\n");
	scanf("%d %d",&a,&b);
	add=a+b;
	printf("the addition of %d and%d is=%d\n",a,b,add);
	sub=a-b;
	printf("the substraction of %d and %d is=%d\n",a,b,sub);
	mul=a*b;
	printf("the multiplication of %d and %d is =%d\n",a,b,mul);
	div=a/b;
	printf("the division of %d and %d is=%f\n",a,b,div);
}
