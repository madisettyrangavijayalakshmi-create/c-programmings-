#include<stdio.h>
int main()
{
	int n,d,rev=0;
	print("enter any value");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(rev==n)
	printf("it is a palindrome");
	else
	printf("it is not a palindrome");
	return 0;
}
