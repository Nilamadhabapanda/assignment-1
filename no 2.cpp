#include<stdio.h>
int main()
{
	float cel,far;
	printf("enter the value of temperature in celcius\n");
	scanf("%f",&cel);
	far=(9*cel+160)/5;
	printf("the value of temperature in fahrenheit is %f",far);
}
