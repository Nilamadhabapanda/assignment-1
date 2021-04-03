#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the number of terms present in an array:");
scanf("%d",&n);
int a[n];
int i,evenpos=0,evensum=0,sum;
printf("enter the values in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
if(i%2==0)
{
evenpos=evenpos+a[i];
}
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
evensum=evensum+a[i];
}
}
sum=evenpos+evensum;
printf("the sum of the even position value and even number of the array is %d",sum);
}
