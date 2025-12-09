#include<stdio.h>
int main()
{
	int n;
	printf("enter size of the series");
	sacnf("%d",&n);
	printf("the factorial numbers are:");
	for(i=0;i<=n;i++)
	{
		printf("%d",fib(i));
	}
	return 0;
}
int fib(int i)
{
	if(i<=1)
	return i;
	else
	return fib(i-1)+fib(i-2);
}
