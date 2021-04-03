// WAP IN C TO FIND THE FACTORIAL OF A NUMBER USING RECURSION
#include<stdio.h>
int findfact(int);

int main()
{
    int n , f;
    printf("Enter a Number :\n");
    scanf("%d" , &n);

    f = findfact(n);

    printf("The Factoeial of the number is : %d", f);
    return 0;
}
int findfact(int n)
{
    if(n==1)
    return 1;
    else
    return(n*findfact(n-1));
}
