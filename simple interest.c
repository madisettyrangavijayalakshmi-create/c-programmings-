#include<stdio.h>
int main()
{
	float P,T,R,SI;
	printf("enter the values of P,T,R");
	scanf("%f%f%f",&P,&T,&R);
	SI=P*T*R/100;
	printf("SI=%f",SI);
	return 0;
}
