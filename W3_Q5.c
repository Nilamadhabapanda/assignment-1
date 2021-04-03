// WAP IN C TO CHECK PALLINDROME NUMBER USING RECURSION
#include<stdio.h>
#include<math.h>
int rev(int num);
int pallindrome(int num);

int main()
{
    int num;
    printf("Enter the number to check : \n");
    scanf("%d" , &num);

    if(pallindrome(num) == 1)
    {
        printf("%d is a pallindrome number " , num);
    }
    else
    {
        printf("%d is not a pallindrome number" , num);
    }
    return 0;
}
int pallindrome(int num)
{
    if(num == rev(num))
    {
        return 1;
    }
        return 0;
}
int rev(int num)
{
    int digit = (int)log10(num);
    if(num==0)
        return 0;
       
    return((num%10*pow(10,digit) + rev(num/10)));
   
}