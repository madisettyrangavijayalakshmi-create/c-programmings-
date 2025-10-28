#include<stdio.h>
int main()
{
	int date,month,year,lucky,number,sum;
	printf("enter your date,month,year");
	scanf("%d%d%d",&date,&month,&year);
	sum=date+month+year;
	lucky=sum%9;
	printf("your lucky number is=%d",lucky);
	return 0;
}
