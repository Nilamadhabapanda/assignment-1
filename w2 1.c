#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum=0;
printf("enter a number\n");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("\nthe sum of the digits of the number is %d",sum);
}
