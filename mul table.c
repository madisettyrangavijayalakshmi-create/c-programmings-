#include<stdio.h>
int main()
{
	int tn,ts,i;
	printf("enter tn value");
	scanf("%d",&tn);
	printf("enter ts value");
	scanf("%d",&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d*%d=%d \n",tn,i,i*tn);
	}
	return 0;
}
