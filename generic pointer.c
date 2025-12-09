#include<Stdio.h>
int main()
{
	int X = 14;
	char ch ='A';
	void *P;
	P = &X;
	printf("value of p=%d",*(int*)P);
	P = &ch;
	printf("\n value of p = %c",*(char*)P);
	return 0;
}
