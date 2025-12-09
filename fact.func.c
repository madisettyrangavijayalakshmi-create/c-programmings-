#include<stdio.h>
void fact(long intn);
int main()
{
	long int n;
	printf("enter any number");
	sacnf("%d",&n);
	fact(n);
	return 0;
}
void fact(long int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial is=%ld",f);
}
