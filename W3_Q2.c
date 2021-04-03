// WAP IN C TO PRINT FACTORIAL OF ANY NUMBER USING FUNCTION
#include<stdio.h>
#include<math.h>
int fact()
{
    int i , fact=1, n;
    scanf("%d" , &n);
    for(i=1; i<=n; i++)
    fact= fact*i;
    return fact;
}

int main()
{
    printf("Enter the number : \n");
    printf("The factorial of the given number is %d", fact());
    return 0;
}
