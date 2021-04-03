// WAP IN C TO FIND GCD AND LCM OF ANY TWO NUMBER USING RECURSION
#include<stdio.h>
int gcd(int x,  int y ,int f )
{
	if(f==1)
    return 1;
    else if(x%f==0 && y%f==0)
    return f;
    else 
    return gcd(x,y,--f);
	
}


int lcm(int x ,  int y , int m)
{
	if((x*m)%y==0)
	return x*m;
	else
	return lcm(x,y,++m);
}

int main()
{
	int x,y,g,l;
	printf("Enter Two Numbers \n");
	scanf("%d%d", &x,&y);
	if(x>y)
	{
		g=gcd(x,y,y);
		l=lcm(x,y,1);
		
	}
	else
	{
		g=gcd(x,y,x);
		l=lcm(y,x,1);
		
	}
	printf("GCD of the number is =%d \n " , g);
	printf("LCM of the number is =%d \n " , l);
}
	
