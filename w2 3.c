#include<stdio.h>
#include<string.h>
void main()
{
int i,count=0;
char str[100];
printf("enter the string to counts the word present in that string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
count++;
}
printf("\nthe number of words present in the string is %d\n",count);
}
