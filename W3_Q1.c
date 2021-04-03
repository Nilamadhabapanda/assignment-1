// WAP IN C TO FIND SQUARE OF ANY NUMBER USING THE FUNCTION
#include<stdio.h>
float squareno(float num)

{
    return(num*num);
}
int main()
{
float number, square;
printf("Enter the number : \n");
scanf("%f" , &number);
square = squareno(number);
printf(" The square of the number is  :%f", square);
return 0;
}
