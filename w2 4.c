#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,large,small;
printf("enter the number of terms present in an array\n");
scanf("%d",&n);
printf("enter the values in an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
small=a[0];
for(i=0;i<n;i++)
{
if(a[i]>large)
{
large=a[i];
}
if(a[i]<small)
{
small=a[i];
}
}
printf("\n\nthe largest value of the array is %d",large);
printf("the smallesst value of the array is %d",small);
}
