#include<stdio.h>
int n;
int fibo(int n)
{
	if (n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else 
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("the fibonaccci series is %d",fibo(n));
}

