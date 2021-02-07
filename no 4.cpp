#include<stdio.h>
int main()
{
	int p,c,b,m,comp,s;
	float avg;
	printf("enter the value of marks you get in phu che bio math and comp respectively\n");
	scanf("%d %d %d %d %d",&p,&c,&b,&m,&comp);
	s=p+c+b+m+comp;
	avg=s/5.0;
	printf("the percentage of mark secured by the student is%f",avg);
	if(avg>=90)
	{
		printf("grade_A\n");
	}
	else if(avg>=80)
	{
		printf("grade_B\n");
	}
	else if(avg>=70)
	{
		printf("grade_C\n");
	}
	else if(avg>=60)
	{
		printf("grade_D\n");
	}
	else if(avg>=40)
	{
		printf("grade_E\n");
	}
	else
	{
		printf("grade_F\n");
	}
}
