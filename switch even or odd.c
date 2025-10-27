#include<stdio.h>
int main()
{
	int x;
	printf("enter x value");
	scanf("%d",&x);
	switch(x%2==0)
	{
		case 1:printf("it is even");
		break;
		case 0:printf("it is odd");
		break;
	}
	return 0;
}
